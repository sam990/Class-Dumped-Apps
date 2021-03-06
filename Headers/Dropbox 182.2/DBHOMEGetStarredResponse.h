//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBHOMEGetStarredStatus, NSArray, NSNumber, NSString;

@interface DBHOMEGetStarredResponse : NSObject <DBSerializable, NSCopying>
{
    DBHOMEGetStarredStatus *_status;
    NSNumber *_hasMore;
    NSNumber *_hideSection;
    NSArray *_items;
    NSNumber *_serverTimeMs;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *serverTimeMs; // @synthesize serverTimeMs=_serverTimeMs;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSNumber *hideSection; // @synthesize hideSection=_hideSection;
@property(readonly, nonatomic) NSNumber *hasMore; // @synthesize hasMore=_hasMore;
@property(readonly, nonatomic) DBHOMEGetStarredStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (_Bool)isEqualToGetStarredResponse:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithStatus:(id)arg1 hasMore:(id)arg2 hideSection:(id)arg3 items:(id)arg4;
- (id)initWithStatus:(id)arg1 hasMore:(id)arg2 hideSection:(id)arg3 items:(id)arg4 serverTimeMs:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

