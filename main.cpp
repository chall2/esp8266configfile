#include <espConfig.h>

struct config_t
{ 
    char data[60];
    int state = 0;
};

config_t configuration;

void setup()
{
  Serial.begin(115200);
  
  if (ReadCfg(configuration))
  {
    Serial.println("Restored config!");
    Serial.println(configuration.state);
  }
  
  configuration.state++;
  WriteCfg(configuration);
  
  delay(5000);
  ESP.reset();
}

void loop() {
  // put your main code here, to run repeatedly:
}