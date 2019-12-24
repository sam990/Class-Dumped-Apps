//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SUPReceiverUtils : NSObject
{
}

+ (id)preferredLanguage;
+ (id)dataEntryWithKey:(id)arg1 value:(id)arg2;
+ (id)psdEntryWithKey:(id)arg1 value:(id)arg2;
+ (id)deviceData;
+ (id)appDataForConfig:(id)arg1;
+ (id)renderMobileRequestWithConfig:(id)arg1;
+ (id)URLEncodeString:(id)arg1;
+ (id)queryStringForParameters:(id)arg1;
+ (id)appVersion;
+ (id)deviceModel;
+ (id)carrierName;
+ (id)systemVersion;
+ (id)receiverURLForPath:(id)arg1 config:(id)arg2 parameters:(id)arg3;
+ (id)URLForReceiverPath:(id)arg1 config:(id)arg2;
+ (id)contentTypeProtobufURLRequestWithURL:(id)arg1 data:(id)arg2;
+ (id)productSpecificDataFromDictionary:(id)arg1;
+ (id)helpMobileRequestWithConfig:(id)arg1;
+ (id)URLRequestWithReceiverPath:(id)arg1 requestProto:(id)arg2 config:(id)arg3;
+ (id)URLRequestWithReceiverPath:(id)arg1 requestData:(id)arg2 config:(id)arg3;
+ (id)URLRequestWithURL:(id)arg1 contentURL:(id)arg2 config:(id)arg3;
+ (id)fetcherWithRequest:(id)arg1 fetcherService:(id)arg2 retryCount:(unsigned long long)arg3;
+ (id)baseRequestDataFromConfig:(id)arg1;

@end
