//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpeedTestEngine/NSObject-Protocol.h>

@class NSDictionary, NSString, ServerHost;
@protocol SuiteRunnerDelegate;

@protocol SuiteRunner <NSObject>
@property(readonly, nonatomic) _Bool isCancelled;
@property(readonly, nonatomic) NSString *testMethod;
@property(readonly, nonatomic) NSDictionary *samples;
@property(readonly, nonatomic) NSDictionary *traceroute;
@property(retain, nonatomic) ServerHost *server;
@property(nonatomic) _Bool threadingWasUserSelected;
@property(nonatomic) short threadingType;
@property(nonatomic) double primerDuration;
@property(readonly, nonatomic) unsigned char stage;
- (_Bool)shouldFallBackToHTTP;
- (void)cancel;
- (void)runStage;
- (void)prepareNextStage;
- (void)reset;
- (id)initWithDelegate:(id <SuiteRunnerDelegate>)arg1;
@end

