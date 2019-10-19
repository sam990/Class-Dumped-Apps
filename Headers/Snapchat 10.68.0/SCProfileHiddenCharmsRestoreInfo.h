//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCCharmsOwner, SCProfileHiddenCharmsMenuInfo;

@interface SCProfileHiddenCharmsRestoreInfo : NSObject <NSCopying>
{
    int _charmIdentifier;
    SCCharmsOwner *_charmsOwner;
    NSString *_restoreCharmPrompt;
    SCProfileHiddenCharmsMenuInfo *_hiddenCharmsMenuInfo;
}

@property(readonly, copy, nonatomic) SCProfileHiddenCharmsMenuInfo *hiddenCharmsMenuInfo; // @synthesize hiddenCharmsMenuInfo=_hiddenCharmsMenuInfo;
@property(readonly, copy, nonatomic) NSString *restoreCharmPrompt; // @synthesize restoreCharmPrompt=_restoreCharmPrompt;
@property(readonly, nonatomic) int charmIdentifier; // @synthesize charmIdentifier=_charmIdentifier;
@property(readonly, copy, nonatomic) SCCharmsOwner *charmsOwner; // @synthesize charmsOwner=_charmsOwner;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCharmsOwner:(id)arg1 charmIdentifier:(int)arg2 restoreCharmPrompt:(id)arg3 hiddenCharmsMenuInfo:(id)arg4;

@end
