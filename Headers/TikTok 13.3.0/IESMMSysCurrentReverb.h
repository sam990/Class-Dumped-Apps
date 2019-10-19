//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESDynamicsProcessorModel, IESReverbModel, NSArray;

@interface IESMMSysCurrentReverb : NSObject
{
    float _recordVolume;
    float _musicVolume;
    IESReverbModel *_currentModel;
    IESDynamicsProcessorModel *_dynamicsProcessorModel;
    NSArray *_currentEQArray;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSArray *currentEQArray; // @synthesize currentEQArray=_currentEQArray;
@property(nonatomic) float musicVolume; // @synthesize musicVolume=_musicVolume;
@property(nonatomic) float recordVolume; // @synthesize recordVolume=_recordVolume;
@property(retain, nonatomic) IESDynamicsProcessorModel *dynamicsProcessorModel; // @synthesize dynamicsProcessorModel=_dynamicsProcessorModel;
@property(retain, nonatomic) IESReverbModel *currentModel; // @synthesize currentModel=_currentModel;
- (void).cxx_destruct;

@end
