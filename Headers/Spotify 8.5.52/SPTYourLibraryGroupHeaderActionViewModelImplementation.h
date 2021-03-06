//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCreatePlaylistControllerDelegate-Protocol.h"
#import "SPTYourLibraryGroupHeaderActionViewModel-Protocol.h"

@class NSString, SPTYourLibraryLogger;
@protocol SPTCreatePlaylistController;

@interface SPTYourLibraryGroupHeaderActionViewModelImplementation : NSObject <SPTCreatePlaylistControllerDelegate, SPTYourLibraryGroupHeaderActionViewModel>
{
    _Bool _visible;
    NSString *_accessibilityLabel;
    long long _icon;
    id <SPTCreatePlaylistController> _createPlaylistController;
    SPTYourLibraryLogger *_logger;
}

@property(retain, nonatomic) SPTYourLibraryLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTCreatePlaylistController> createPlaylistController; // @synthesize createPlaylistController=_createPlaylistController;
@property(readonly, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly) long long icon; // @synthesize icon=_icon;
@property(readonly, copy) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
- (void).cxx_destruct;
- (void)createPlaylistController:(id)arg1 didRenamePlaylistURL:(id)arg2;
- (void)createPlaylistControllerDidCancel:(id)arg1;
- (void)createPlaylistController:(id)arg1 didCreatePlaylistURL:(id)arg2;
- (void)action;
- (id)initWithTestManager:(id)arg1 createPlaylistController:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

