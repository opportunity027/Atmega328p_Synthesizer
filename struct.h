 __attribute__((__packed__)) struct envelope{
  //エンペロープ処理変数
  uint8_t nextWaitTimeMs;
  uint8_t attackCount;
  uint8_t decayCount;
  uint8_t sustainReleaseCount;
  uint8_t calculatedDuty;
  uint8_t outputDuty;
  uint8_t status;
  //エンベロープパラメータ
  uint8_t attackDuration;
  uint8_t decayDuration;
  uint8_t sustainDuration;
  uint8_t releaseDuration;
  uint8_t attackChangeValue;
  uint8_t decayChangeValue;
  uint8_t sustainChangeValue;
  uint8_t releaseChangeValue;
  uint8_t sustainLowerValue;
  uint8_t releaseLowerValue;
  bool isAllowOverrideAttackDuty;
  uint8_t sustainMode;
  uint8_t releaseMode;
  bool isEnableRelease;
};
 __attribute__((__packed__)) struct pitchBend{
  uint8_t nextWaitTimeMs;
  uint8_t interval;
  uint16_t ratioDivide32768;
  uint16_t higherFreq;
  uint16_t lowerFreq;
};
  __attribute__((__packed__)) struct LFO{
  uint8_t nextWaitTimeMs;
  bool mode;
  uint8_t duration;
  uint8_t changeValue;
  uint8_t lowerValue;
  bool isConvergence;
  bool isInitializeModulationIndex;
};
  __attribute__((__packed__)) struct conductor{
  //wave DDS操作用変数
  uint16_t beepMs;
  uint16_t address;
  uint16_t beepDuration;
  //ループ再生時末端まで行ったときに戻るアドレス
  uint16_t returnAddress;
  //内臓データからDDSに送る周波数変数
  uint16_t freq;
};
  __attribute__((__packed__)) struct noiseDDS{
  //ADCからの捕獲ノイズを保存
  uint16_t noiseRegister = 0x8000;
  uint16_t noiseOperator;
  uint8_t mode;
  uint8_t noise;
  //ボリューム
  uint8_t volume;
};
  __attribute__((__packed__)) struct waveDDS{
  //サンプリングテーブルパラメータ
  int8_t* carrierSamplingTable;
  int8_t* carrierDetuneSamplingTable;
  int8_t* modularSamplingTable;
  //メインオペレーター
  uint16_t carrierOperator;
  //FM音源用　変調波位相変数
  uint16_t modularOperator;
  uint16_t modularFreq;
  //変調パラメータ
  uint8_t tempModularIndexDivide256;
  uint8_t modularIndexDivide256;
  uint16_t modularFreqRatioDivide256;
  //FMフィードバック
  uint8_t modularFeedbackGainDivide256;
  //FMデチューン用変数
  uint16_t carrierDetuneOperator;
  uint16_t carrierDetuneFreq;
  uint16_t detunePitchDivide32768;
  bool isOnlyDetuneDuringSR;
  uint8_t outputCarrierDetuneDuty;
  //ボリューム
  uint8_t volume;
  uint8_t volumeDetune;
  uint8_t outputVolumeDetune;
};