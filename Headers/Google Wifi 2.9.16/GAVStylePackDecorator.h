//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVMutableStylePack-Protocol.h"

@class NSArray, NSMutableArray;
@protocol GAVStylePack, GAVStyleProvider;

@interface GAVStylePackDecorator : NSObject <GAVMutableStylePack>
{
    id <GAVStylePack> _stylePack;
    NSMutableArray *_axisStyleRules;
    NSMutableArray *_seriesStyleRules;
    NSArray *_colors;
    NSArray *_highlightColors;
    NSArray *_antiHighlightColors;
    id <GAVStyleProvider> _colorProvider;
}

@property(retain, nonatomic) id <GAVStyleProvider> colorProvider; // @synthesize colorProvider=_colorProvider;
@property(copy, nonatomic) NSArray *antiHighlightColors; // @synthesize antiHighlightColors=_antiHighlightColors;
@property(copy, nonatomic) NSArray *highlightColors; // @synthesize highlightColors=_highlightColors;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) NSMutableArray *seriesStyleRules; // @synthesize seriesStyleRules=_seriesStyleRules;
@property(retain, nonatomic) NSMutableArray *axisStyleRules; // @synthesize axisStyleRules=_axisStyleRules;
@property(retain, nonatomic) id <GAVStylePack> stylePack; // @synthesize stylePack=_stylePack;
- (void).cxx_destruct;
- (id)animationStrategyForRendererType:(id)arg1;
- (id)styleForRendererType:(id)arg1 color:(id)arg2;
- (id)colorFromSeriesStyle:(id)arg1 rendererType:(id)arg2;
- (id)colorFromSeriesSpec:(id)arg1 seriesStyle:(id)arg2 toColors:(id)arg3;
- (id)styleWithStyle:(id)arg1 style:(id)arg2 key:(id)arg3;
- (id)seriesAntiHighlightStyleForSeriesSpec:(id)arg1 seriesStyle:(id)arg2;
- (id)seriesHighlightStyleForSeriesSpec:(id)arg1 seriesStyle:(id)arg2;
- (id)datumAntiHighlightStyleForSeriesSpec:(id)arg1 seriesStyle:(id)arg2;
- (id)datumHighlightStyleForSeriesSpec:(id)arg1 seriesStyle:(id)arg2;
- (id)stylesForSeriesSpec:(id)arg1;
- (id)stylesForAxisSpec:(id)arg1;
- (void)addSeriesStyleRules:(id)arg1;
- (void)addAxisStyleRules:(id)arg1;
- (void)addSeriesStyleRule:(id)arg1;
- (void)addAxisStyleRule:(id)arg1;
- (id)initWithStylePack:(id)arg1;

@end
