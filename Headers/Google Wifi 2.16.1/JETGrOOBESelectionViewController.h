//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGrOOBEListPickerViewController.h"

#import "JETGrOOBEListPickerViewControllerDataSource-Protocol.h"

@class NSArray, NSString;

@interface JETGrOOBESelectionViewController : JETGrOOBEListPickerViewController <JETGrOOBEListPickerViewControllerDataSource>
{
    NSArray *_groups;
}

@property(copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
- (void).cxx_destruct;
- (id)headerAccessibilityIdentifier;
- (id)captionSubtitle;
- (id)captionTitle;
- (void)onRightButton;
- (id)rightButtonText;
- (long long)rightButtonType;
- (id)itemAccessibilityIdentifierForIndex:(unsigned long long)arg1;
- (id)itemSubtitleForIndex:(unsigned long long)arg1;
- (id)itemTitleForIndex:(unsigned long long)arg1;
- (unsigned long long)numItems;
- (void)displayEditNameNotSupportedAlert;
- (void)existingGroupSelected:(id)arg1;
- (void)newGroupTapped;
- (id)analyticsScreenName;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAPState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

