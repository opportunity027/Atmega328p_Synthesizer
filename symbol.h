//サンプリング基本音声波形
#define PWM_DUTY_SIN(sample) ((sin(PI*((double)sample/(double)128))*(double)128))>=127?127:(int8_t)((sin(PI*((double)sample/(double)128))*(double)128))   //擬似正弦波 127~-128
#define PWM_DUTY_SAW(sample) (int8_t)(sample-128)                                             //のこぎり波  127~-128
#define PWM_DUTY_TRIANGULAR(sample) sample<=127?(int8_t)((sample<<1)-128):sample==128?127:(int8_t)(384-(sample<<1))   //三角波  127~-128
#define PWM_DUTY_RECTANGULAR12_5(sample) (int8_t)(sample<=31?127:-128)                         //矩形波Duty12.5%  127~-128
#define PWM_DUTY_RECTANGULAR25(sample) (int8_t)(sample<=63?127:-128)                           //矩形波Duty25%    127~-128
#define PWM_DUTY_RECTANGULAR50(sample) (int8_t)(sample<=127?127:-128)                          //矩形波Duty50%    127~-128
//エンベロープ用減衰波形
#define EXP_RELEASE(sample) (uint8_t)(255*exp(-0.078*sample))
#define COS_RELEASE(sample) (uint8_t)((128*(cos(PI*((double)sample/(double)64)))+128)<=255?(128*(cos(PI*((double)sample/(double)64)))+128):255)
//楽譜コマンド定義
#define cSpT 65000  //搬送波サンプリングテーブルを変更する
#define dSpT 65001  //デチューン用搬送波サンプリングテーブルを変更する
#define mSpT 65002  //変調波サンプリングテーブルを変更する
#define CVol 65003  //チャンネルボリュームを変更する
#define DVol 65004  //チャンネルデチューンボリュームを変更する
#define RetA 65005  //リターンアドレスを変更する
#define cEvA 65006  //搬送波、エンベロープアタック時間を変更する
#define cEvD 65007  //搬送波、エンベロープディケイ時間を変更する
#define cEvS 65008  //搬送波、エンベロープサステイン時間を変更する
#define cEvR 65009  //搬送波、エンベロープリリース時間を変更する
#define cEAD 65010  //搬送波、エンベロープアタックテーブル加算量を変更する
#define cEDD 65011  //搬送波、エンベロープディケイテーブル加算量を変更する
#define cESD 65012  //搬送波、エンベロープサステインテーブル加算量を変更する
#define cERD 65013  //搬送波、エンベロープリリーステーブル加算量を変更する
#define cOAk 65014  //搬送波、アタック時のデューティ上書きを変更する
#define cESM 65015  //搬送波、エンベロープサステインモードを変更する
#define cERM 65016  //搬送波、エンベロープリリースモードを変更する
#define cInR 65017  //搬送波、ノート間減衰を変更する
#define cESL 65018  //搬送波、サステイン最低値を変更する
#define cERL 65019  //搬送波、リリース最低値を変更する
#define mEvA 65020  //変調波、エンベロープアタック時間を変更する
#define mEvD 65021  //変調波、エンベロープディケイ時間を変更する
#define mEvS 65022  //変調波、エンベロープサステイン時間を変更する
#define mEvR 65023  //変調波、エンベロープリリース時間を変更する
#define mEAD 65024  //変調波、エンベロープアタックテーブル加算量を変更する
#define mEDD 65025  //変調波、エンベロープディケイテーブル加算量を変更する
#define mESD 65026  //変調波、エンベロープサステインテーブル加算量を変更する
#define mERD 65027  //変調波、エンベロープリリーステーブル加算量を変更する
#define mOAk 65028  //変調波、アタック時のデューティ上書きを変更する
#define mESM 65029  //変調波、エンベロープサステインモードを変更する
#define mERM 65030  //変調波、エンベロープリリースモードを変更する
#define mInR 65031  //変調波、ノート間減衰を変更する
#define mESL 65032  //変調波、サステイン最低値を変更する
#define mERL 65033  //変調波、リリース最低値を変更する
#define MdFG 65034  //変調波オペレーターフィードバックゲインを変更する
#define MdIn 65035  //変調係数βを変更する
#define MdFR 65036  //変調周波数倍率を変更する
#define ODSR 65037  //サステイン、リリース時のみのデチューンを変更する
#define DePi 65038  //デチューンピッチ変化量を変更する
#define LFDu 65039  //LFO時間(変調係数β減少期間)を変更する
#define LFDe 65040  //LFO量(変調係数β減少量)を変更する
#define LFLV 65041  //変調係数β最低値を変更する
#define LFIC 65042  //LFOを永続するかどうか変更する
#define LFIM 65043  //ノート変更時に変調係数βを上書きするか変更する
#define PBIn 65044  //ピッチベント間隔を変更する
#define PBRa 65045  //ピッチベント周波数変更倍率を変更する
#define PBHF 65046  //ピッチベント上限周波数を変更する
#define PBLF 65047  //ピッチベント下限周波数を変更する
#define NisM 65048  //ノイズ生成の長周期、短周期を変更する
//サンプリングテーブルID
#define SIN  0
#define SAW  1
#define TRI  2
#define RT12 3
#define RT25 4
#define RT50 5
//エンベロープステータス
#define ATTACK  0
#define DECAY   1
#define SUSTAIN 2
#define RELEASE 3
#define MUTE    4
#define CONSTANT  5
//
#define u16u16Mul(dst, dep1, dep2) \
asm volatile ( \
"clr r26 \n\t" \
"mul %A1, %A2 \n\t" \
"movw %A0, r0 \n\t" \
"mul %B1, %B2 \n\t" \
"movw %C0, r0 \n\t" \
"mul %B2, %A1 \n\t" \
"add %B0, r0 \n\t" \
"adc %C0, r1 \n\t" \
"adc %D0, r26 \n\t" \
"mul %B1, %A2 \n\t" \
"add %B0, r0 \n\t" \
"adc %C0, r1 \n\t" \
"adc %D0, r26 \n\t" \
"clr r1 \n\t" \
: \
"=&r" (dst) \
: \
"a" (dep1), \
"a" (dep2) \
: \
"r26" \
) 