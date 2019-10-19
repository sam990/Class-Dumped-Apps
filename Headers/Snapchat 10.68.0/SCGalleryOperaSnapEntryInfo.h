//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCGalleryOperaSnapEntryInfo : NSObject <NSCopying>
{
    _Bool _isPrivate;
    _Bool _isEntryClientCompatible;
    _Bool _isPendingBackup;
    _Bool _isPersistLocally;
    _Bool _isTemporaryFeatured;
    int _entryType;
    int _entrySource;
    NSString *_title;
}

@property(readonly, nonatomic) _Bool isTemporaryFeatured; // @synthesize isTemporaryFeatured=_isTemporaryFeatured;
@property(readonly, nonatomic) _Bool isPersistLocally; // @synthesize isPersistLocally=_isPersistLocally;
@property(readonly, nonatomic) _Bool isPendingBackup; // @synthesize isPendingBackup=_isPendingBackup;
@property(readonly, nonatomic) _Bool isEntryClientCompatible; // @synthesize isEntryClientCompatible=_isEntryClientCompatible;
@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) int entrySource; // @synthesize entrySource=_entrySource;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) int entryType; // @synthesize entryType=_entryType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEntryType:(int)arg1 title:(id)arg2 entrySource:(int)arg3 isPrivate:(_Bool)arg4 isEntryClientCompatible:(_Bool)arg5 isPendingBackup:(_Bool)arg6 isPersistLocally:(_Bool)arg7 isTemporaryFeatured:(_Bool)arg8;

@end
