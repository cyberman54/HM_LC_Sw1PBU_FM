void HM_Status_Request(uint8_t cnl, uint8_t *data, uint8_t len);
void HM_Set_Cmd(uint8_t cnl, uint8_t *data, uint8_t len);
void HM_Reset_Cmd(uint8_t cnl, uint8_t *data, uint8_t len);
void HM_Switch_Event(uint8_t cnl, uint8_t *data, uint8_t len);
void HM_Remote_Event(uint8_t cnl, uint8_t *data, uint8_t len);
void HM_Sensor_Event(uint8_t cnl, uint8_t *data, uint8_t len);
void HM_Config_Changed(uint8_t cnl, uint8_t *data, uint8_t len);
void currentImpuls();
void buttonState(uint8_t idx, uint8_t state);
void relayState(uint8_t cnl, uint8_t curStat, uint8_t nxtStat);
void setInternalRelay(uint8_t cnl, uint8_t tValue);
void setVirtualRelay(uint8_t cnl, uint8_t tValue);

#if defined(USE_SERIAL)
void sendCmdStr();
void sendPairing();
void showEEprom();
void writeEEprom();
void clearEEprom();
void showHelp();
void showSettings();
void testConfig();
void buttonSend();
void stayAwake();
void resetDevice();
#endif
