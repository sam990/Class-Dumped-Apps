//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDARequestAccessNotificationCategoryDelegate-Protocol.h"

@class GDKSharingClient, NSArray, NSMutableDictionary, NSString;
@protocol GDANotificationsActionHandlerDelegate, SSOService;

@interface GDANotificationsActionHandler : NSObject <GDARequestAccessNotificationCategoryDelegate>
{
    _Bool _requestAccessEnabled;
    _Bool _commentActionsEnabled;
    id <GDANotificationsActionHandlerDelegate> _delegate;
    struct NSMutableDictionary *_categoryMap;
    GDKSharingClient *_sharingClient;
    id <SSOService> _SSOService;
}

@property(readonly, nonatomic) _Bool commentActionsEnabled; // @synthesize commentActionsEnabled=_commentActionsEnabled;
@property(readonly, nonatomic) _Bool requestAccessEnabled; // @synthesize requestAccessEnabled=_requestAccessEnabled;
@property(readonly, nonatomic) id <SSOService> SSOService; // @synthesize SSOService=_SSOService;
@property(readonly, nonatomic) GDKSharingClient *sharingClient; // @synthesize sharingClient=_sharingClient;
@property(readonly, nonatomic) NSMutableDictionary *categoryMap; // @synthesize categoryMap=_categoryMap;
@property(nonatomic) __weak id <GDANotificationsActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)postNotificationWithCategoryID:(id)arg1 actionID:(id)arg2 userID:(id)arg3 textInputValue:(id)arg4;
- (void)addCategory:(id)arg1;
- (void)createCategories;
- (void)viewFileActionWasActivatedWithFileID:(id)arg1;
- (_Bool)handleActionWithID:(id)arg1 userInfo:(id)arg2 userText:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithSharingClient:(id)arg1 SSOService:(id)arg2 requestAccessEnabled:(_Bool)arg3 commentActionsEnabled:(_Bool)arg4;
@property(readonly, copy, nonatomic) NSArray *categories;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

