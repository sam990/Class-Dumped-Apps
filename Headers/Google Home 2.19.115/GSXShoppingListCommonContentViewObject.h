//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOContentViewObject-Protocol.h"
#import "GSXShoppingListItemContentViewObject-Protocol.h"
#import "GSXShoppingListItemUpdatableContentViewObject-Protocol.h"
#import "SECCollectionViewFlowContentViewObject-Protocol.h"

@class GSXShoppingListItemV2, NSString, NSURL, UIFont;
@protocol GSXShoppingListItemContentViewDelegate, GSXShoppingListItemDelegate><GSXShoppingListItemToggleStateDelegate;

@interface GSXShoppingListCommonContentViewObject : NSObject <GOOContentViewObject, GSXShoppingListItemContentViewObject, GSXShoppingListItemUpdatableContentViewObject, SECCollectionViewFlowContentViewObject>
{
    _Bool _selected;
    _Bool _editable;
    _Bool _selectingMode;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    id <GSXShoppingListItemContentViewDelegate> _contentViewDelegate;
    id <GSXShoppingListItemDelegate><GSXShoppingListItemToggleStateDelegate> _shoppingListItemDelegate;
    GSXShoppingListItemV2 *_shoppingListItem;
    NSURL *_itemImageURL;
}

+ (id)attributedStringWithString:(id)arg1 font:(id)arg2 color:(id)arg3 checked:(_Bool)arg4;
+ (id)objectWithShoppingListItem:(id)arg1 delegate:(id)arg2;
@property(retain, nonatomic) NSURL *itemImageURL; // @synthesize itemImageURL=_itemImageURL;
@property(retain, nonatomic) GSXShoppingListItemV2 *shoppingListItem; // @synthesize shoppingListItem=_shoppingListItem;
@property(nonatomic) _Bool selectingMode; // @synthesize selectingMode=_selectingMode;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) __weak id <GSXShoppingListItemDelegate><GSXShoppingListItemToggleStateDelegate> shoppingListItemDelegate; // @synthesize shoppingListItemDelegate=_shoppingListItemDelegate;
@property(nonatomic) __weak id <GSXShoppingListItemContentViewDelegate> contentViewDelegate; // @synthesize contentViewDelegate=_contentViewDelegate;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (id)shoppingItemSubtitleAttributedString;
- (id)shoppingListItemTitleAttributedString;
- (id)productSubtitleAttributedString;
- (id)subtitleAttributedString;
- (id)productTitleString;
- (id)titleAttributedString;
- (void)updateObjectWithItemImageURL:(id)arg1;
- (void)updateObjectWithShoppingListItem:(id)arg1;
@property(nonatomic) _Bool checked;
- (id)text;
- (Class)contentViewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long elementKind;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

