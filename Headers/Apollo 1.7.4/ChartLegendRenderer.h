//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Charts/ChartRenderer.h>

@class ChartLegend;

@interface ChartLegendRenderer : ChartRenderer
{
    // Error parsing type: , name: legend
    // Error parsing type: , name: _formLineSegmentsBuffer
}

- (void).cxx_destruct;
- (id)initWithViewPortHandler:(id)arg1;
- (void)drawLabelWithContext:(struct CGContext *)arg1 x:(double)arg2 y:(double)arg3 label:(id)arg4 font:(id)arg5 textColor:(id)arg6;
- (void)drawFormWithContext:(struct CGContext *)arg1 x:(double)arg2 y:(double)arg3 entry:(id)arg4 legend:(id)arg5;
- (void)renderLegendWithContext:(struct CGContext *)arg1;
- (void)computeLegendWithData:(id)arg1;
- (id)initWithViewPortHandler:(id)arg1 legend:(id)arg2;
@property(nonatomic, retain) ChartLegend *legend; // @synthesize legend;

@end
