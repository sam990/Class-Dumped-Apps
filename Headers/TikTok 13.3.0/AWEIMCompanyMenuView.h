//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEIMCompanyMenuModel, NSArray;

@interface AWEIMCompanyMenuView : UIView
{
    CDUnknownBlockType _didClickKeyboard;
    CDUnknownBlockType _didClickAutoreplyMenu;
    CDUnknownBlockType _wouldWantToShowMenu;
    CDUnknownBlockType _wouldWantToHideAllMenu;
    CDUnknownBlockType _didTapped;
    AWEIMCompanyMenuModel *_menuModel;
    NSArray *_menus;
}

@property(retain, nonatomic) NSArray *menus; // @synthesize menus=_menus;
@property(retain, nonatomic) AWEIMCompanyMenuModel *menuModel; // @synthesize menuModel=_menuModel;
@property(copy, nonatomic) CDUnknownBlockType didTapped; // @synthesize didTapped=_didTapped;
@property(copy, nonatomic) CDUnknownBlockType wouldWantToHideAllMenu; // @synthesize wouldWantToHideAllMenu=_wouldWantToHideAllMenu;
@property(copy, nonatomic) CDUnknownBlockType wouldWantToShowMenu; // @synthesize wouldWantToShowMenu=_wouldWantToShowMenu;
@property(copy, nonatomic) CDUnknownBlockType didClickAutoreplyMenu; // @synthesize didClickAutoreplyMenu=_didClickAutoreplyMenu;
@property(copy, nonatomic) CDUnknownBlockType didClickKeyboard; // @synthesize didClickKeyboard=_didClickKeyboard;
- (void).cxx_destruct;
- (id)generateSeparator;
- (void)setupUI;
- (void)clickKeyboard;
- (void)hideSubMenu;
- (id)initWithModel:(id)arg1;

@end
