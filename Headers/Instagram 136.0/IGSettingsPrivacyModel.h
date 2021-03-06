//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSArray, NSMutableDictionary;

@interface IGSettingsPrivacyModel : NSObject
{
    NSArray *_allSections;
    NSArray *_interactionsData;
    NSArray *_interactionsRowTypes;
    NSArray *_connectionsData;
    NSArray *_connectionsRowTypes;
    NSMutableDictionary *_interactionsStringToRowTypeDictionary;
    NSMutableDictionary *_connectionsStringToRowTypeDictionary;
    _Bool _isPrivateAccount;
    IGUserSession *_userSession;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool isPrivateAccount; // @synthesize isPrivateAccount=_isPrivateAccount;
- (void).cxx_destruct;
- (long long)connectionsRowTypeForTitleString:(id)arg1;
- (long long)interactionsRowTypeForTitleString:(id)arg1;
- (id)privacyTextArray;
- (long long)privacyModelSectionCount;
- (long long)connectionsRowCount;
- (long long)interactionsRowCount;
- (id)connectionsTextForRow:(long long)arg1;
- (id)interactionsTextForRow:(long long)arg1;
- (long long)connectionsRowForRow:(long long)arg1;
- (long long)interactionsRowForRow:(long long)arg1;
- (long long)sectionIndexForSection:(long long)arg1;
- (id)initWithUserSession:(id)arg1;

@end

