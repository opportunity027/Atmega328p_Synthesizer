constexpr uint16_t InitLoopAddressCh[7] = {10,5,10,1,1,8,40};//ループ再生時末端まで行ったときに戻るアドレス3
//各チャンネル音量、基本は128
constexpr uint8_t InitVolumeCh[7] = {128,128,128,128,64,128,16};
constexpr uint8_t InitVolumeDetuneCh[6] = { 0, 0, 0, 0, 0, 0};
//音声データ　各チャンネルごとに記述Freq周波数、Duration音の長さミリ秒
constexpr PROGMEM const uint16_t beepFreqCh0[] =     { 587, 587, 587, 587, 466, 523, 587,   0, 523, 587, 440, 392, 440, 392,   0, 523, 523,   0, 494, 523,   0, 494, 494,   0, 440, 392, 370, 392, 330,   0, 440, 392, 440, 392,   0, 523, 523,   0, 494, 523,   0, 494, 494,   0, 440, 392, 440, 523, 587,   0,0xffff};//melo1
constexpr PROGMEM const uint16_t beepDurationCh0[] = { 144, 144, 144, 432, 432, 432, 144, 144, 144,1296, 432, 432, 432, 108, 108, 432, 108, 108, 432, 108, 108, 432, 108, 108, 432, 432, 432, 216,1728, 216, 432, 432, 432, 108, 108, 432, 108, 108, 432, 108, 108, 432, 108, 108, 432, 432, 432, 216,1728, 216,0xffff};//melo1
constexpr PROGMEM const uint16_t beepFreqCh1[] =     {   0, 370,   0, 330, 370, 370, 330, 370, 330,   0, 392, 392,   0, 392, 392,   0, 392, 392,   0, 370, 330, 294, 294, 262,   0, 370, 330, 370,   0, 440, 440,   0, 440, 440,   0, 440, 440,   0, 370, 330, 370, 392, 466,   0,0xffff};//melo2
constexpr PROGMEM const uint16_t beepDurationCh1[] = {1728, 144, 144, 144,1296, 432, 432, 432, 108, 108, 432, 108, 108, 432, 108, 108, 432, 108, 108, 432, 432, 432, 216,1728, 216, 432, 432, 432, 216, 432, 108, 108, 432, 108, 108, 432, 108, 108, 432, 432, 432, 216,1728, 216,0xffff};//melo2
constexpr PROGMEM const uint16_t beepFreqCh2[] =     { 392, 392, 392, 370, 349, 330, 294,   0, 262, 294, 294, 294, 294, 294,   0, 262, 262,   0, 294, 330,   0, 262, 262,   0, 294, 294, 262, 247, 220,   0, 294, 294, 294,   0, 262, 262,   0, 294,   0, 262, 262,   0, 294, 294, 294, 262, 233,   0,0xffff};//melo3
constexpr PROGMEM const uint16_t beepDurationCh2[] = { 144, 144, 144, 432, 432, 432, 144, 144, 144,1296, 432, 432, 432, 108, 108, 432, 108, 108, 432, 108, 108, 432, 108, 108, 432, 432, 432, 216,1728, 216, 432, 432, 432, 216, 432, 108, 108, 432, 216, 432, 108, 108, 432, 432, 432, 216,1728, 216,0xffff};//melo3
constexpr PROGMEM const uint16_t beepFreqCh3[] =     {   0, 147,   0, 147,   0, 147, 147, 131, 131,   0, 131,   0, 131, 131, 131, 147,   0, 147,   0, 147, 147, 110, 110,   0, 123,   0, 131, 110, 165, 110, 147,   0, 147,   0, 147, 147, 131, 131,   0, 131,   0, 131, 131, 131, 147,   0, 147,   0, 147, 147, 131, 117, 117,   0, 131,   0, 147, 175, 110,0xffff};//base1
constexpr PROGMEM const uint16_t beepDurationCh3[] = {3456, 216, 216, 216, 216, 216, 432, 216, 216, 216, 216, 216, 216, 432, 216, 216, 216, 216, 216, 216, 432, 216, 216, 216, 216, 216, 216, 216, 216, 216, 216, 216, 216, 216, 216, 432, 216, 216, 216, 216, 216, 216, 432, 216, 216, 216, 216, 216, 216, 216, 216, 216, 216, 216, 216, 216, 216, 432, 216,0xffff};//base1
constexpr PROGMEM const uint16_t beepFreqCh4[] =     {   0, 147, 147, 147, 147,   0, 147, 147, 147,   0, 147, 131, 131, 131,   0, 131,   0, 131,   0, 131, 131,   0, 147, 147, 147, 147,   0, 147, 147, 147,   0, 147, 110, 110, 110, 110, 123, 110, 110, 131, 110, 165, 110, 147, 147, 147, 147,   0, 147, 147, 147,   0, 147, 131, 131, 131,   0, 131,   0, 131,   0, 131, 131,   0, 147, 147, 147, 147,   0, 147, 147, 147,   0, 147, 131, 117, 117, 117, 117, 131, 117, 117, 147, 175, 110,0xffff};//base2
constexpr PROGMEM const uint16_t beepDurationCh4[] = {3456, 216, 108, 108, 108, 108, 108, 108, 108, 108, 432, 216, 216, 108, 108, 216, 216, 108, 108, 432, 108, 108, 216, 108, 108, 108, 108, 108, 108, 108, 108, 432, 216, 216, 108, 108, 216, 108, 108, 216, 216, 216, 216, 216, 108, 108, 108, 108, 108, 108, 108, 108, 432, 216, 216, 108, 108, 216, 216, 108, 108, 432, 108, 108, 216, 108, 108, 108, 108, 108, 108, 108, 108, 216, 216, 216, 216, 108, 108, 216, 108, 108, 216, 432, 216,0xffff};//base2
constexpr PROGMEM const uint16_t beepFreqCh5[] =     {   0,  92,  98,  98,  73,   0,  73,  73,  73, 147,   0,  73, 147,   0,  73, 147,   0,  73,  65,  65, 131,   0,  73, 147,   0,  82, 165,   0,  65, 131,   0,  73, 147,   0,  73, 147,   0,  73, 147,   0,  73,  55,  55, 110,   0,  62, 123,   0,  65, 131,   0,  82, 165,   0,  73, 147,   0,  73, 147,   0,  73, 147,   0,  73,  65,  65, 131,   0,  73, 147,   0,  82, 165,   0,  65, 131,   0,  73, 147,   0,  73, 147,   0,  73, 147,   0,  65,  58,  58, 117,   0,  65, 131,   0,  73, 147,   0,  87, 175,   0,0xffff};//base3
constexpr PROGMEM const uint16_t beepDurationCh5[] = { 432, 432, 432, 432, 144, 144, 144,1296, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 216, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 216, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 216, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 216, 216, 108, 108, 216, 108, 108, 216, 108, 108, 216, 108, 108,0xffff};//base3
//ホワイトノイズパート音楽データ　ノイズはADCの捕獲ノイズから供給される
constexpr PROGMEM const uint16_t noiseFreq[] =     {8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,8192,8192,8192,8192,8192,8192,8192,8192,   0,8192,   0,8192,8192,8192,8192,8192,8192,8192,8192,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,8192,   0,0xffff};
constexpr PROGMEM const uint16_t noiseDuration[] = {  54,  90,  54,  90,  54,  90,  54, 378,  54, 378,  54,  54,  54,  54,  54,  54,  54,  54,  54, 234,  54,  90,  54,  54,  54,  54,  54,  54,  54,  54,  54, 162,  54, 162,  54,  54,  54,  54,  54, 162,  54, 162,  54, 162,  54,  54,  54,  54,  54, 162,  54, 162,  54, 162,  54, 162,  54, 162,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54, 162,  54, 162,  54, 162,  54,  54,  54,  54,  54,  54,  54,  54,  54, 162,  54, 162,  54,  54,  54,  54,  54, 162,  54, 162,  54, 162,  54, 162,  54, 162,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54, 162,  54, 162,  54, 162,  54,  54,  54,  54,  54,  54,  54,  54,0xffff};

constexpr int8_t* InitCarrierSamplingTable[] =       {sinSampling,sinSampling,sinSampling,sinSampling,sawSampling,sawSampling};
constexpr int8_t* InitCarrierDetuneSamplingTable[] = {sinSampling,sinSampling,sinSampling,sinSampling,sinSampling,sinSampling};
constexpr int8_t* InitModularSamplingTable[] =       {sinSampling,sinSampling,sinSampling,sinSampling,sinSampling,sinSampling};
//キャリア波エンベロープ処理{ch0,ch1,ch2,ch3,ch4,ch5,noise} 
constexpr uint8_t InitCarrierEnvelopeAttackDuration[7] = {  1,  1,  1,  1,  1,  1,  0};   //アタック時間係数。大きいほどゆっくり立ち上がる。0->255 入力値ms
constexpr uint8_t InitCarrierEnvelopeDecayDuration[7] =  {  4,  4,  4,  4,  4,  4,  0};   //ディケイ時間係数。大きいほどゆっくり立ち下がる。 255->128 入力値ms
constexpr uint8_t InitCarrierEnvelopeSustainDuration[7] ={100,100,100,100,100,100,  7};   //サステイン時間係数。大きいほどゆっくり立ち下がる。128 or 255 -> 0 入力値ms
constexpr uint8_t InitCarrierEnvelopeReleaseDuration[7] ={ 30, 30, 30, 30, 30, 30,  7};   //リリース時間係数。大きいほどゆっくり立ち下がる。128 or 255 -> 0 入力値ms
constexpr uint8_t InitCarrierEnvelopeAttackChangeValue[7] = {16,16,16,16,16,16,16};   //アタックテーブル加算量。大きいほど速く立ち上がる。アタック時間係数/入力値
constexpr uint8_t InitCarrierEnvelopeDecayChangeValue[7] =  { 8, 8, 8, 8, 8, 8, 8};   //ディケイテーブル加算量。大きいほど速く立ち下がる。ディケイ時間係数/入力値
constexpr uint8_t InitCarrierEnvelopeSustainChangeValue[7] ={ 1, 1, 1, 1, 1, 1, 1};   //サステインテーブル加算量。大きいほど速く立ち下がる。リリース時間係数/入力値
constexpr uint8_t InitCarrierEnvelopeReleaseChangeValue[7] ={ 1, 1, 1, 1, 1, 1, 1};   //リリーステーブル加算量。大きいほど速く立ち下がる。リリース時間係数/入力値
constexpr uint8_t InitCarrierEnvelopeSustainLowerValue[7] = {32,32,32,32,32,32, 0};   //サステインによるエンベロープ最低値。MAX128。0より大きいと次の音または休止が来るまで発音し続ける
constexpr uint8_t InitCarrierEnvelopeReleaseLowerValue[7] = { 0, 0, 0, 0, 0, 0, 0};   //リリースによるエンベロープ最低値。MAX128。0より大きいと次の音が来るまで発音し続ける
constexpr bool InitIsAllowOverrideCarrierAttackDuty[7] =  {false,false,false,false,false,true,true}; //アタック時、現在のデューティ比が更新値よりも小さくても上書きする
constexpr uint8_t InitCarrierEnvelopeSustainMode[7]   =  {1,1,1,1,1,1,1};    //サステイン減衰モード指定 0:線形減衰、1:exp減衰、2:正弦減衰
constexpr uint8_t InitCarrierEnvelopeReleaseMode[7]   =  {1,1,1,1,1,1,1};    //リリース減衰モード指定 0:線形減衰、1:exp減衰、2:正弦減衰
constexpr bool InitIsAllowCarrierInterNoteRelease[7]={true,true,true,true,true,true,true}; //ノート間の減衰継続(リリース処理)の許可、trueで休止ノートでも前の減衰を継続
//変調波エンベロープ処理{ch0,ch1,ch2,ch3,ch4,ch5} 
constexpr uint8_t InitModularEnvelopeAttackDuration[6] = {0,0,0,0,0,0};   //アタック時間係数。大きいほどゆっくり立ち上がる。0->128 入力値×128ms
constexpr uint8_t InitModularEnvelopeDecayDuration[6] =  {0,0,0,0,0,0};   //ディケイ時間係数。大きいほどゆっくり立ち下がる。 128->64 入力値×64ms
constexpr uint8_t InitModularEnvelopeSustainDuration[6] ={0,0,0,0,0,0};   //サステイン時間係数。大きいほどゆっくり立ち下がる。64 or 128 -> 0 入力値×64ms
constexpr uint8_t InitModularEnvelopeReleaseDuration[6] ={0,0,0,0,0,0};   //リリース時間係数。大きいほどゆっくり立ち下がる。64 or 128 -> 0 入力値×64ms
constexpr uint8_t InitModularEnvelopeAttackChangeValue[6] = {0,0,0,16,3,3};   //アタックテーブル加算量。大きいほど速く立ち上がる。アタック時間係数/入力値
constexpr uint8_t InitModularEnvelopeDecayChangeValue[6] =  {0,2,0,0,0,0};   //ディケイテーブル加算量。大きいほど速く立ち下がる。ディケイ時間係数/入力値
constexpr uint8_t InitModularEnvelopeSustainChangeValue[6] ={0,2,0,1,0,0};   //サステインテーブル加算量。大きいほど速く立ち下がる。リリース時間係数/入力値
constexpr uint8_t InitModularEnvelopeReleaseChangeValue[6] ={0,2,0,1,0,0};   //リリーステーブル加算量。大きいほど速く立ち下がる。リリース時間係数/入力値
constexpr uint8_t InitModularEnvelopeSustainLowerValue[6] = {0,32,0,64,0,0};   //サステインによるエンベロープ最低値。MAX128。0より大きいと次の音または休止が来るまで発音し続ける
constexpr uint8_t InitModularEnvelopeReleaseLowerValue[6] = {0,32,0,64,0,0};   //リリースによるエンベロープ最低値。MAX128。0より大きいと次の音が来るまで発音し続ける
constexpr bool InitIsAllowOverrideModularAttackDuty[6] =  {1,1,1,0,1,1}; //アタック時、現在のデューティ比が更新値よりも小さくても上書きする
constexpr uint8_t InitModularEnvelopeSustainMode[6]   =  {0,0,0,0,0,0};    //サステイン減衰モード指定 0:線形減衰、1:exp減衰、2:正弦減衰
constexpr uint8_t InitModularEnvelopeReleaseMode[6]   =  {0,0,0,0,0,0};    //リリース減衰モード指定 0:線形減衰、1:exp減衰、2:正弦減衰
constexpr bool InitIsAllowModularInterNoteRelease[6]={1,1,1,1,1,1}; //ノート間の減衰継続(リリース処理)の許可、trueで休止ノートでも前の減衰を継続
//FM音源モード、コンフィグレーション
constexpr uint8_t InitModulationIndexDivide256[6]=       {150,150,150,200,200,200};         //変調係数β 入力値の1/256倍。0で変調なし、PSG音源モード
constexpr uint16_t InitModulationFreqRatioDivide256[6]=  {512,384,256,128,  0,  0};  //入力値の1/256倍の変調周波数倍率。0で変調なし、PSG音源モード
constexpr uint8_t InitModulationFeedbackGainDivide256[6]={128,128,128,128,  0,  0};  //変調波オペレーター、フィードバックゲイン
//FMデチューンピッチシフト
constexpr bool InitIsOnlyDetuneDuringSR[6]=      { true,false,false,false,false, true};  //サステイン、リリース時のみデチューンを有効にする
constexpr uint16_t InitDetunePitchDivide32768[6]={33000,16384,32300,32900,32300,32300};  //デチューンによるピッチをずらしたオペレーターを加算する
//FM Low Frequency Oscillator、コンフィグレーション
constexpr uint8_t InitModulationLFODuration[6]={0,0,0,0,0,0};             //LFO間隔ChangeValueを入力値ごとに減少させる
constexpr uint8_t InitModulationLFOChangeValue[6]={0,0,0,0,0,0};           //一度のLFOによる変調係数βの減少量
constexpr uint8_t InitModulationLFOLowerValue[6]={0,128,0,196, 96,128};           //LFOによる変調係数βの最低値
constexpr bool InitIsModulationLFOOnce[6]={false,true,false,false,true,true};  //変調係数が0になったら変調係数βを最低値に維持
constexpr bool InitIsInitializeModulationIndex[6]={false,true,true,true,true,true};  //ノート変更時変調係数βを設定値に上書きする
//ピッチベントコンフィグレーション
constexpr uint8_t InitPitchBendInterval[7] = {0,0,0,0,0,0,0};
constexpr uint16_t InitPitchBendRatioDivide32768[7]={32768,32768,32768,32768,32768,32768,32768};
constexpr uint16_t InitPitchBendHigherFreq[7] =     {32767,32767,32767,32767,32767,32767,32767};
constexpr uint16_t InitPitchBendLowerFreq[7] =      {    0,    0,    0,    0,    0,    0,    0};
//ADC・長・短周期ノイズコンフィグレーション
constexpr uint8_t InitNoiseMode=1;   //1バイトノイズ生成アルゴリズム、0:ADC捕獲ノイズ、1:線形帰還シフトレジスタ長周期モード、2:線形帰還シフトレジスタ短周期モード