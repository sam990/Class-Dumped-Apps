//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGNetworkRequest.h>

@class NSDictionary, NSString;
@protocol IBGMessageRequestDelegate;

@interface IBGMessageRequest : IBGNetworkRequest
{
    _Bool _isExecuting;
    id <IBGMessageRequestDelegate> _delegate;
    NSString *_chatID;
    NSString *_dataUrl;
    NSDictionary *_dataParameters;
}

@property(retain, nonatomic) NSDictionary *dataParameters; // @synthesize dataParameters=_dataParameters;
@property(copy, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(copy, nonatomic) NSString *chatID; // @synthesize chatID=_chatID;
@property(nonatomic) __weak id <IBGMessageRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isExecuting;
- (void).cxx_destruct;
- (id)getMessageIDWithResponse:(id)arg1;
- (void)networkDone:(id)arg1 URLSessionDataTask:(id)arg2 response:(id)arg3 error:(id)arg4 responseDictionary:(id)arg5;
- (id)requestCreator;
- (id)initWithParameters:(id)arg1 chatID:(id)arg2 delegate:(id)arg3;

@end

