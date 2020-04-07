//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GSKHeaderCollectionViewController.h>

#import <Module_Framework/GOOHeaderNavigationParentViewController-Protocol.h>

@class GOOFlexibleHeaderViewController, GOOHeaderNavigationView, NSArray, NSString;
@protocol GSKVoicePickerViewControllerDelegate;

@interface GSKVoicePickerViewController : GSKHeaderCollectionViewController <GOOHeaderNavigationParentViewController>
{
    NSArray *_languageList;
    GOOFlexibleHeaderViewController *headerViewController;
    GOOHeaderNavigationView *headerNavigationView;
    id <GSKVoicePickerViewControllerDelegate> _voicePickerDelegate;
}

+ (id)languageSelectorViewController;
@property(nonatomic) __weak id <GSKVoicePickerViewControllerDelegate> voicePickerDelegate; // @synthesize voicePickerDelegate=_voicePickerDelegate;
@property(retain, nonatomic) GOOHeaderNavigationView *headerNavigationView; // @synthesize headerNavigationView;
@property(retain, nonatomic) GOOFlexibleHeaderViewController *headerViewController; // @synthesize headerViewController;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setUpModel;
- (void)viewDidLoad;
- (id)initWithLanguageList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
