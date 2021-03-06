//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSData, NSNumber, NSString;

@interface FIRRemoteConfigValue : NSObject <NSCopying>
{
    NSData *_data;
    long long _source;
}

@property(nonatomic) long long source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
@property(readonly, nonatomic) id JSONValue;
@property(readonly, nonatomic) _Bool boolValue;
@property(readonly, nonatomic) NSData *dataValue;
@property(readonly, nonatomic) NSNumber *numberValue;
@property(readonly, nonatomic) NSString *stringValue;
- (id)init;
- (id)initWithData:(id)arg1 source:(long long)arg2;

@end

