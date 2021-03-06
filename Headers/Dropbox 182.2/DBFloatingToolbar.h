//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

#import "DBFloatingToolbarProtocol-Protocol.h"

@protocol DBToolbarActionManagerProtocol, DBToolbarContextProtocol;

@interface DBFloatingToolbar : UIToolbar <DBFloatingToolbarProtocol>
{
    double _intrinsicWidth;
    unsigned long long _trueItemCount;
    id <DBToolbarActionManagerProtocol> _actionManager;
    id <DBToolbarContextProtocol> _context;
    _Bool _useDarkToolbarStyle;
    unsigned long long _toolbarType;
    struct UIEdgeInsets _insets;
}

+ (id)db_toolbarItemsForFixingMarginOfItems:(id)arg1 withInsets:(struct UIEdgeInsets)arg2;
+ (double)db_negativePaddingWidthWithItemCount:(unsigned long long)arg1;
+ (double)db_widthForItemsCount:(unsigned long long)arg1 withInsets:(struct UIEdgeInsets)arg2;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) _Bool useDarkToolbarStyle; // @synthesize useDarkToolbarStyle=_useDarkToolbarStyle;
@property(readonly, nonatomic) unsigned long long toolbarType; // @synthesize toolbarType=_toolbarType;
- (void).cxx_destruct;
- (void)resetInsets;
- (struct CGSize)intrinsicContentSize;
- (void)db_updateWithItems:(id)arg1;
- (void)setToolbarEnabled:(_Bool)arg1;
- (_Bool)isToolbarEmpty;
- (void)toolbarSetFileActions:(id)arg1;
- (id)initWithToolbarButtonFactory:(id)arg1 actionRegistry:(id)arg2 context:(id)arg3;

@end

