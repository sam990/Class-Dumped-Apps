//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFModel.h>

@class NSArray, NSNumber, NSString, PSPDFAction, UIColor;

@interface PSPDFOutlineElement : PSPDFModel
{
    _Bool _expanded;
    unsigned int _fontTraits;
    NSNumber *_expandedForSearch;
    PSPDFOutlineElement *_parent;
    NSString *_title;
    PSPDFAction *_action;
    UIColor *_color;
    NSArray *_children;
    unsigned long long _level;
}

+ (id)propertyKeys;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(nonatomic) unsigned int fontTraits; // @synthesize fontTraits=_fontTraits;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) PSPDFAction *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak PSPDFOutlineElement *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSNumber *expandedForSearch; // @synthesize expandedForSearch=_expandedForSearch;
- (void).cxx_destruct;
- (_Bool)isEqualToOutlineElement:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isExpandedForSearchAvailable;
@property(getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) unsigned long long pageIndex;
- (id)flattenedChildrenIncludingNonExpandedElements:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *allFlattenedChildren;
@property(readonly, nonatomic) NSArray *flattenedChildren;
- (void)addChildren:(id)arg1 includeNonExpanded:(_Bool)arg2;
- (id)description;
- (id)initWithOutlineElement:(const shared_ptr_e2a95364 *)arg1;
- (id)initWithTitle:(id)arg1 color:(id)arg2 fontTraits:(unsigned int)arg3 action:(id)arg4 children:(id)arg5 level:(unsigned long long)arg6 isExpanded:(_Bool)arg7;
- (id)initWithTitle:(id)arg1 color:(id)arg2 fontTraits:(unsigned int)arg3 action:(id)arg4 children:(id)arg5 level:(unsigned long long)arg6;

@end

