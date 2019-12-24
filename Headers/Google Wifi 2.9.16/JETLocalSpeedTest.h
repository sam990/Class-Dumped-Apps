//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class GPBCodedOutputStream, JETLocalAPI, NSInputStream, NSMutableArray, NSOutputStream, NSString;
@protocol JETUserStateProtocol;

@interface JETLocalSpeedTest : NSObject <NSStreamDelegate>
{
    unsigned char _buffer[1048576];
    _Bool _testRequested;
    _Bool _firstEventReceived;
    _Bool _testStartRequestSent;
    _Bool _isUploadTest;
    _Bool _testEnded;
    id <JETUserStateProtocol> _userState;
    JETLocalAPI *_localAPI;
    NSInputStream *_readStream;
    NSOutputStream *_writeStream;
    GPBCodedOutputStream *_protoWriteStream;
    NSMutableArray *_transferPerSecond;
    long long _totalTransfer;
    double _initialTime;
    CDUnknownBlockType _openCompleteBlock;
    CDUnknownBlockType _testCompleteBlock;
    NSString *_deviceId;
}

@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) _Bool testEnded; // @synthesize testEnded=_testEnded;
@property(nonatomic) _Bool isUploadTest; // @synthesize isUploadTest=_isUploadTest;
@property(nonatomic) _Bool testStartRequestSent; // @synthesize testStartRequestSent=_testStartRequestSent;
@property(copy, nonatomic) CDUnknownBlockType testCompleteBlock; // @synthesize testCompleteBlock=_testCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType openCompleteBlock; // @synthesize openCompleteBlock=_openCompleteBlock;
@property(nonatomic) double initialTime; // @synthesize initialTime=_initialTime;
@property(nonatomic) _Bool firstEventReceived; // @synthesize firstEventReceived=_firstEventReceived;
@property(nonatomic) long long totalTransfer; // @synthesize totalTransfer=_totalTransfer;
@property(retain, nonatomic) NSMutableArray *transferPerSecond; // @synthesize transferPerSecond=_transferPerSecond;
@property(retain, nonatomic) GPBCodedOutputStream *protoWriteStream; // @synthesize protoWriteStream=_protoWriteStream;
@property(retain, nonatomic) NSOutputStream *writeStream; // @synthesize writeStream=_writeStream;
@property(retain, nonatomic) NSInputStream *readStream; // @synthesize readStream=_readStream;
@property(retain, nonatomic) JETLocalAPI *localAPI; // @synthesize localAPI=_localAPI;
@property(retain, nonatomic) id <JETUserStateProtocol> userState; // @synthesize userState=_userState;
@property(nonatomic) _Bool testRequested; // @synthesize testRequested=_testRequested;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (_Bool)isCurrentTestFinished;
- (id)buildResults;
- (void)resetState;
- (void)finishTest:(id)arg1;
- (void)handleDataEvent:(long long)arg1;
- (void)writeDataToAP;
- (void)readDataFromAP;
- (void)closeConnection;
- (void)handleLookupFinishedForHost:(struct __CFHost *)arg1 withError:(const CDStruct_87dc826d *)arg2;
- (void)openConnectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendSpeedTestRequest:(id)arg1;
- (void)enableLocalSpeedTestForAccessPoint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verifyFirstEvent;
- (void)startTest;
- (void)runTestWithDeviceId:(id)arg1 type:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)runUploadTestForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runDownloadTestForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkForLocalAPWithDeviceId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithUserState:(id)arg1 localAPI:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
