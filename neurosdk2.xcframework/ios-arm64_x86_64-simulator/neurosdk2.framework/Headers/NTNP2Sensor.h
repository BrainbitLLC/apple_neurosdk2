
#ifndef NTNP2Sensor_h
#define NTNP2Sensor_h

#import <Foundation/Foundation.h>
#include "NTSensor.h"

@interface NTNP2Sensor : NTSensor
@property (NS_NONATOMIC_IOSONLY, readonly) NTSensorAmpMode AmpMode;     // не у всех
@property (NS_NONATOMIC_IOSONLY) NTCompactNeuroStimulParam*  StimulatorParamCompactNeuro;   // NS
@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSArray<NTEEGChannelInfo *>*_Nullable  SupportedChannelsCompactNeuro;  // NS



- (void) setAmpModeCallback:(void (^_Nullable)(NTSensorAmpMode))callback;       // ne u vseh
- (void) setResistCallbackCompactNeuro:(void (^_Nullable)(NSArray<NTCompactNeuroResistData*>*_Nonnull))callback;
- (void) setSignalDataCallbackCompactNeuro:(void (^_Nullable)(NSArray<NTCompactNeuroSignalData*>*_Nonnull))callback;

@end


#endif /* NTNP2Sensor_h */
