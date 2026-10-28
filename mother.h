constexpr uint16_t InitLoopAddressCh[7] = {0,0,0,0,0,0,0};//ループ再生時末端まで行ったときに戻るアドレス
//各チャンネル音量、基本は128 合計256まで
constexpr uint8_t InitVolumeCh[7] =       {128,128,128, 0, 0, 0,16};
constexpr uint8_t InitVolumeDetuneCh[6] = {  0, 0, 0,0, 0, 0};
//音声データ　各チャンネルごとに記述Freq周波数、Duration音の長さミリ秒
//subMelody
constexpr PROGMEM const uint16_t beepFreqCh0[] =     {   0, 494, 587,   0, 494, 587,   0, 494, 587,   0, 392, 494,   0, 494, 587,   0, 494, 587,   0, 494, 587,   0, 392, 494,   0, 494, 587,   0, 494, 587,   0, 494, 587,   0, 392, 494,   0, 494, 587,   0, 494, 587,   0, 494, 587,   0, 392, 494,   0, 247, 294,   0, 247, 294,   0, 247, 294,   0, 247, 294,   0, 196, 262,   0, 220, 277,   0, 220, 294, 220, 294, 294, 220, 294, 220, 294,   0, 247, 294,   0, 247, 294,   0, 247, 294,   0, 247, 294,   0, 196, 262,   0, 220, 277,   0, 220, 294, 220, 294, 294, 220, 294, 220, 294, 247, 147, 294, 147, 220, 147, 294, 147, 220, 147, 294, 147, 196, 147, 294, 147, 196, 165, 262, 165, 220, 165, 277, 165, 185, 294, 165, 294, 147, 294, 131, 294, 247, 147, 294, 147, 220, 147, 294, 147, 220, 147, 294, 147, 196, 147, 294, 147, 196, 165, 262, 165, 220, 165, 277, 165, 185, 294, 165, 294, 147, 294, 131, 294, 247, 196, 247, 294, 392, 294, 220, 262, 247, 196, 247, 294, 392, 294, 220, 262,0xFFFF};
constexpr PROGMEM const uint16_t beepDurationCh0[] = { 467, 467, 934, 467, 467, 934, 467, 467, 934, 467, 466, 934, 467, 467, 934, 467, 467, 934, 467, 467, 933, 467, 467, 934, 467, 467, 934, 467, 467, 934, 466, 467, 934, 467, 467, 934, 467, 467, 934, 467, 467, 933, 467, 467, 934, 467, 467, 934, 467, 467, 933, 467, 467, 934, 467, 467, 934, 467, 467, 934, 467, 466, 934, 467, 467, 934, 467, 233, 701, 233, 234, 467, 233, 700, 234, 233, 467, 467, 934, 467, 467, 934, 467, 467, 934, 466, 467, 934, 467, 467, 934, 467, 467, 934, 467, 233, 700, 234, 233, 467, 234, 700, 234, 233, 467, 467, 467, 467, 467, 467, 467, 466, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 466, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 466, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 466, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 466, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 467, 466, 467, 467, 467, 467, 467,0xFFFF};
constexpr PROGMEM const uint16_t beepFreqCh1[] =     {   0, 494, 587, 784, 880, 784, 494, 587, 784, 880, 784, 494, 523, 587, 587, 440, 494, 523, 494, 392, 392, 370, 330, 294, 262, 494, 523, 587, 587, 440, 494, 523, 494, 392, 392, 370, 330, 294, 262, 494, 523, 587, 587, 659, 440, 494, 523, 494, 392, 440, 330, 370, 392, 440, 494, 370, 330, 294, 262, 494, 523, 587, 587, 659, 440, 494, 523, 494, 392, 440, 330, 370, 392, 440, 494, 370, 330, 294, 262, 247, 220, 294, 247, 220, 294,0xffff};
constexpr PROGMEM const uint16_t beepDurationCh1[] ={14942,1868,1868,1400, 467,1868,1868,1867,1401, 467,1868, 934, 467, 466,1868, 934, 467, 467,1868,1867,1868, 934, 934, 934, 933, 934, 467, 467,1868, 934, 467, 467,1867,1868,1868, 933, 934, 934, 934, 934, 467, 467, 934, 933, 934, 467, 467,1868, 934, 467, 467, 466, 467, 467, 467, 934, 934, 934, 934, 934, 466, 467, 934, 934, 934, 467, 467,1867, 934, 467, 467, 467, 467, 467, 467, 934, 934, 933, 934,1868, 934, 934,1867, 934, 934,0xffff};
constexpr PROGMEM const uint16_t beepFreqCh2[] =     { 196, 185, 175, 165, 196, 185, 175, 165,  98,  92,  87,  82,  98,  92,  87,  82,  98,  92,  87,  82,  65,  69,  73,  65,  62,  55,  98,  92,  87,  82,  65,  69,  73,  65,  62,  55,  49,  46,  44,  41,  65,  69,  73,  65,  62,  55,  49,  46,  44,  41,  65,  69,  73,  65,  62,  55,  49,  44,  49,  44,0xffff};
constexpr PROGMEM const uint16_t beepDurationCh2[] = {1868,1868,1868,1867,1868,1868,1867,1868,1868,1868,1867,1868,1868,1867,1868,1868,1867,1868,1868,1868,1867,1868, 934, 934, 934, 933,1868,1868,1868,1867,1868,1868, 933, 934, 934, 934,1868,1867,1868,1868,1868,1867, 934, 934, 934, 934,1867,1868,1868,1867,1868,1868, 934, 934, 933, 934,1868,1868,1867,1868,0xffff};
constexpr PROGMEM const uint16_t beepFreqCh3[] =     {   0,0xffff};
constexpr PROGMEM const uint16_t beepDurationCh3[] ={65535,0xffff};
constexpr PROGMEM const uint16_t beepFreqCh4[] =     {   0,0xffff};
constexpr PROGMEM const uint16_t beepDurationCh4[] ={65535,0xffff};
constexpr PROGMEM const uint16_t beepFreqCh5[] =     {   0,0xffff};
constexpr PROGMEM const uint16_t beepDurationCh5[] ={65535,0xffff};
//ホワイトノイズパート音楽データ　ノイズはADCの捕獲ノイズから供給される   
constexpr PROGMEM const uint16_t noiseFreq[] =     {   0,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,0xffff,0xffff};
constexpr PROGMEM const uint16_t noiseDuration[] = { 934,1868,1868,1867,1868,1868,1868,1867,1868,1868,1867,1868,1868,1868,1867,1868,1868,1867,1868,1868,1867,1868,1868,1868,1867,1868,1868,1867,1868,1868,1867,1868,1868,1868,1867,1868,1868,1867,1868,1868,1868,1867,1868,1868,1867,1868,1868,1867,1868,1868,1868,1867, 934,0xffff,0xffff};
//各チャンネル使用波形選択用ポインタ変数配列
constexpr int8_t* InitCarrierSamplingTable[] =       {rectangularSampling25,rectangularSampling50,triangularSampling,sawSampling,sinSampling,sinSampling};
constexpr int8_t* InitCarrierDetuneSamplingTable[] = {rectangularSampling25,rectangularSampling50,triangularSampling,sawSampling,sinSampling,sinSampling};
constexpr int8_t* InitModularSamplingTable[] =       {sinSampling,sinSampling,sinSampling,sinSampling,sinSampling,sinSampling};
//キャリア波エンベロープ処理{ch0,ch1,ch2,ch3,ch4,ch5,noise} 
constexpr uint8_t InitCarrierEnvelopeAttackDuration[7] = {  1,  1,  1,  1,  1,  1,  0};   //アタック時間係数。大きいほどゆっくり立ち上がる。0->128 入力値×128ms
constexpr uint8_t InitCarrierEnvelopeDecayDuration[7] =  {  4,  4,  4,  4,  4,  4,  0};   //ディケイ時間係数。大きいほどゆっくり立ち下がる。 128->64 入力値×64ms
constexpr uint8_t InitCarrierEnvelopeSustainDuration[7] ={  1,  1,  0,100,100,100,  2};   //サステイン時間係数。大きいほどゆっくり立ち下がる。64 or 128 -> 0 入力値×64ms
constexpr uint8_t InitCarrierEnvelopeReleaseDuration[7] ={ 30, 30, 30, 30, 30, 30,  2};   //リリース時間係数。大きいほどゆっくり立ち下がる。64 or 128 -> 0 入力値×64ms
constexpr uint8_t InitCarrierEnvelopeAttackChangeValue[7] = { 6, 6, 2,16,16,16,16};   //アタックテーブル加算量。大きいほど速く立ち上がる。アタック時間係数/入力値
constexpr uint8_t InitCarrierEnvelopeDecayChangeValue[7] =  { 8, 8, 8, 8, 8, 8, 8};   //ディケイテーブル加算量。大きいほど速く立ち下がる。ディケイ時間係数/入力値
constexpr uint8_t InitCarrierEnvelopeSustainChangeValue[7] ={ 1, 1, 1, 1, 1, 1, 1};   //サステインテーブル加算量。大きいほど速く立ち下がる。リリース時間係数/入力値
constexpr uint8_t InitCarrierEnvelopeReleaseChangeValue[7] ={ 1, 1, 1, 1, 1, 1, 1};   //リリーステーブル加算量。大きいほど速く立ち下がる。リリース時間係数/入力値
constexpr uint8_t InitCarrierEnvelopeSustainLowerValue[7] = {64,32,32,32,32,32, 0};   //サステインによるエンベロープ最低値。MAX128。0より大きいと次の音または休止が来るまで発音し続ける
constexpr uint8_t InitCarrierEnvelopeReleaseLowerValue[7] = { 0, 0, 0, 0, 0, 0, 0};   //リリースによるエンベロープ最低値。MAX128。0より大きいと次の音が来るまで発音し続ける
constexpr bool InitIsAllowOverrideCarrierAttackDuty[7] =  {true,true,false,false,true,false,true}; //アタック時、現在のデューティ比が更新値よりも小さくても上書きする
constexpr uint8_t InitCarrierEnvelopeSustainMode[7]   =  {0,0,0,1,1,1,0};    //サステイン減衰モード指定 0:線形減衰、1:exp減衰、2:正弦減衰
constexpr uint8_t InitCarrierEnvelopeReleaseMode[7]   =  {0,0,0,1,1,1,0};    //リリース減衰モード指定 0:線形減衰、1:exp減衰、2:正弦減衰
constexpr bool InitIsAllowCarrierInterNoteRelease[7]={true,true,true,true,true,true,true}; //ノート間の減衰継続(リリース処理)の許可、trueで休止ノートでも前の減衰を継続
//変調波エンベロープ処理{ch0,ch1,ch2,ch3,ch4,ch5} 
constexpr uint8_t InitModularEnvelopeAttackDuration[6] = {0,0,0,0,0,0};   //アタック時間係数。大きいほどゆっくり立ち上がる。0->128 入力値×128ms
constexpr uint8_t InitModularEnvelopeDecayDuration[6] =  {0,0,0,0,0,0};   //ディケイ時間係数。大きいほどゆっくり立ち下がる。 128->64 入力値×64ms
constexpr uint8_t InitModularEnvelopeSustainDuration[6] ={0,0,0,0,0,0};   //サステイン時間係数。大きいほどゆっくり立ち下がる。64 or 128 -> 0 入力値×64ms
constexpr uint8_t InitModularEnvelopeReleaseDuration[6] ={0,30,0,0,0,0};   //リリース時間係数。大きいほどゆっくり立ち下がる。64 or 128 -> 0 入力値×64ms
constexpr uint8_t InitModularEnvelopeAttackChangeValue[6] = {0,0,0,0,0,0};   //アタックテーブル加算量。大きいほど速く立ち上がる。アタック時間係数/入力値
constexpr uint8_t InitModularEnvelopeDecayChangeValue[6] =  {0,0,0,0,0,1};   //ディケイテーブル加算量。大きいほど速く立ち下がる。ディケイ時間係数/入力値
constexpr uint8_t InitModularEnvelopeSustainChangeValue[6] ={0,0,0,0,0,1};   //サステインテーブル加算量。大きいほど速く立ち下がる。リリース時間係数/入力値
constexpr uint8_t InitModularEnvelopeReleaseChangeValue[6] ={0,1,0,0,0,1};   //リリーステーブル加算量。大きいほど速く立ち下がる。リリース時間係数/入力値
constexpr uint8_t InitModularEnvelopeSustainLowerValue[6] = {0,0,0,0,0,0};   //サステインによるエンベロープ最低値。MAX128。0より大きいと次の音または休止が来るまで発音し続ける
constexpr uint8_t InitModularEnvelopeReleaseLowerValue[6] = {0,0,0,0,0,0};   //リリースによるエンベロープ最低値。MAX128。0より大きいと次の音が来るまで発音し続ける
constexpr bool InitIsAllowOverrideModularAttackDuty[6] =  {0,1,0,0,1,0}; //アタック時、現在のデューティ比が更新値よりも小さくても上書きする
constexpr uint8_t InitModularEnvelopeSustainMode[6]   =  {0,0,0,0,0,0};    //サステイン減衰モード指定 0:線形減衰、1:exp減衰、2:正弦減衰
constexpr uint8_t InitModularEnvelopeReleaseMode[6]   =  {0,0,0,0,0,0};    //リリース減衰モード指定 0:線形減衰、1:exp減衰、2:正弦減衰
constexpr bool InitIsAllowModularInterNoteRelease[6]={1,1,1,1,1,1}; //ノート間の減衰継続(リリース処理)の許可、trueで休止ノートでも前の減衰を継続
//FM音源モード、コンフィグレーション
constexpr uint8_t InitModulationIndexDivide256[6]=     {  0,0,0,  0,255,255};         //変調係数β 入力値の1/256倍。0で変調なし、PSG音源モード
constexpr uint16_t InitModulationFreqRatioDivide256[6]={  0,0,0,  0,768,256};  //入力値の1/256倍の変調周波数倍率。0で変調なし、PSG音源モード
constexpr uint8_t InitModulationFeedbackGainDivide256[6]={  0,0,0,  0,255,255};  //変調波オペレーター、フィードバックゲイン
//FMデチューンピッチシフト
constexpr bool InitIsOnlyDetuneDuringSR[6]=      {false,false,false,false,false,false};  //サステイン、リリース時のみデチューンを有効にする
constexpr uint16_t InitDetunePitchDivide32768[6]={32500,32768,32300,32500,32768,32768};  //デチューンによるピッチをずらしたオペレーターを加算する
//FM Low Frequency Oscillator、コンフィグレーション
constexpr uint8_t InitModulationLFODuration[6]={0,1,1,0,1,0};             //LFO間隔ChangeValueを入力値ごとに減少させる
constexpr uint8_t InitModulationLFOChangeValue[6]={0,1,1,0,2,0};           //一度のLFOによる変調係数βの減少量
constexpr uint8_t InitModulationLFOLowerValue[6]={0,128,160,0,128,0};           //LFOによる変調係数βの最低値
constexpr bool InitIsModulationLFOOnce[6]={false,false,false,false,true,false};  //変調係数が0になったら変調係数βを最低値に維持
constexpr bool InitIsInitializeModulationIndex[6]={false,true,true,true,true,false};  //ノート変更時変調係数βを設定値に上書きする
//ピッチベントコンフィグレーション
constexpr uint8_t InitPitchBendInterval[7] = {0,0,0,0,0,0,0};
constexpr uint16_t InitPitchBendRatioDivide32768[7]={32768,32768,32768,32768,32768,32750,32768};
constexpr uint16_t InitPitchBendHigherFreq[7] =     {32767,32767,32767,32767,32767,32767,32767};
constexpr uint16_t InitPitchBendLowerFreq[7] =      {    0,    0,    0,    0,    0,    0,    0};
//ADC・長・短周期ノイズコンフィグレーション
constexpr uint8_t InitNoiseMode=1;   //1バイトノイズ生成アルゴリズム、0:ADC捕獲ノイズ、1:線形帰還シフトレジスタ長周期モード、2:線形帰還シフトレジスタ短周期モード