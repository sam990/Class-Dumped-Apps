//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentViewObject.h>

#import "GDKAutoSizable-Protocol.h"
#import "GDKLinkSharingCVOProtocol-Protocol.h"

@class GDKPermission, NSString;
@protocol GDKAutoSizablePresenter, GDKFile, GDKLinkSharingCVOUpdateDelegate, GDKTemakiLinkSharingCVODelegate;

@interface GDKTemakiLinkSharingCVO : GOOBaseContentViewObject <GDKAutoSizable, GDKLinkSharingCVOProtocol>
{
    _Bool _enabled;
    _Bool _isLinkSharingOn;
    _Bool _isPublishedLinkSharing;
    _Bool _updating;
    _Bool _showSeparator;
    _Bool _isSharedWithSpecificPeople;
    _Bool _isSiteFileType;
    id <GDKAutoSizablePresenter> _autoSizablePresenter;
    GDKPermission *_permission;
    GDKPermission *draftPermission;
    id <GDKLinkSharingCVOUpdateDelegate> _updateDelegate;
    id <GDKTemakiLinkSharingCVODelegate> _delegate;
    id <GDKFile> _file;
    NSString *_warningText;
}

@property(readonly, copy, nonatomic) NSString *warningText; // @synthesize warningText=_warningText;
@property(readonly, nonatomic) _Bool isSiteFileType; // @synthesize isSiteFileType=_isSiteFileType;
@property(readonly, nonatomic) _Bool isSharedWithSpecificPeople; // @synthesize isSharedWithSpecificPeople=_isSharedWithSpecificPeople;
@property(readonly, nonatomic) id <GDKFile> file; // @synthesize file=_file;
@property(nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(nonatomic) __weak id <GDKTemakiLinkSharingCVODelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <GDKLinkSharingCVOUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
@property(readonly, nonatomic, getter=isPublishedLinkSharing) _Bool publishedLinkSharing; // @synthesize publishedLinkSharing=_isPublishedLinkSharing;
@property(readonly, nonatomic, getter=isLinkSharingOn) _Bool linkSharingOn; // @synthesize linkSharingOn=_isLinkSharingOn;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) GDKPermission *draftPermission; // @synthesize draftPermission;
@property(retain, nonatomic) GDKPermission *permission; // @synthesize permission=_permission;
@property(nonatomic) __weak id <GDKAutoSizablePresenter> autoSizablePresenter; // @synthesize autoSizablePresenter=_autoSizablePresenter;
- (void).cxx_destruct;
- (_Bool)isDraftPermissionTurnedOff;
- (id)linkSharingImage;
- (id)linkSharingImageBackgroundColor;
@property(readonly, nonatomic) unsigned long long heightCacheHash;
@property(readonly, nonatomic) NSString *heightCacheKey;
- (id)nonBindingContentView;
- (Class)contentViewClass;
- (id)initWithPermission:(id)arg1 file:(id)arg2 isSharedWithSpecificPeople:(_Bool)arg3 isPublishedLinkSharing:(_Bool)arg4 isSiteFileType:(_Bool)arg5 warningText:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long elementKind;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

