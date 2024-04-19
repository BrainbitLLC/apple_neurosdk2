#ifndef NTHeadphones_h
#define NTHeadphones_h

#import <Foundation/Foundation.h>
#import "NTTypes.h"
#include "NTSensor.h"

@interface NTHeadphones : NTSensor
- (instancetype _Nullable )init NS_UNAVAILABLE;

@property (NS_NONATOMIC_IOSONLY, readonly) NTSensorAmpMode AmpMode;     // не у всех
@property (NS_NONATOMIC_IOSONLY) NTHeadphonesAmplifierParam* AmplifierParamHeadphones; // HP
@property (NS_NONATOMIC_IOSONLY, readonly) NTSensorSamplingFrequency SamplingFrequencyResist;   // у кого есть резист


- (void) setAmpModeCallback:(void (^_Nullable)(NTSensorAmpMode))callback;       // ne u vseh
- (void) setResistCallbackHeadphones:(void (^_Nullable)(NSArray<NTHeadphonesResistData*>*_Nonnull))callback;
- (void) setSignalDataCallbackHeadphones:(void (^_Nullable)(NSArray<NTHeadphonesSignalData*>*_Nonnull))callback;
- (void) PingNeuroSmart:(Byte)marker;        // ns

@end

#endif /* NTHeadphones_h */
