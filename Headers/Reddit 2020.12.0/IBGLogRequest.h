//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGNetworkRequest.h>

@class NSDictionary, NSString;
@protocol IBGLogRequestDelegate;

@interface IBGLogRequest : IBGNetworkRequest
{
    _Bool _isExecuting;
    int _failures;
    NSString *_URL;
    id <IBGLogRequestDelegate> _delegate;
    NSDictionary *_parameters;
}

@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) __weak id <IBGLogRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *URL; // @synthesize URL=_URL;
- (int)failures;
- (_Bool)isExecuting;
- (void).cxx_destruct;
- (void)networkDone:(id)arg1 URLSessionDataTask:(id)arg2 response:(id)arg3 error:(id)arg4 responseDictionary:(id)arg5;
- (id)requestCreator;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;

@end

