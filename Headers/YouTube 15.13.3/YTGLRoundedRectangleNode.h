//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTGLBaseNode.h>

@class YTGLRoundedRectangleProgram;

@interface YTGLRoundedRectangleNode : YTGLBaseNode
{
    YTGLRoundedRectangleProgram *_program;
    float _width;
    float _height;
    float _inset;
}

@property(nonatomic) float inset; // @synthesize inset=_inset;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)beforeDrawWithEyeViewState:(id)arg1;
- (id)initWithWidth:(float)arg1 height:(float)arg2 color:(id)arg3 roundedRectangleProgram:(id)arg4;

@end
