//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGLKVertex;

@interface IGGLKTriangle : NSObject
{
    IGGLKVertex *_vertex1;
    IGGLKVertex *_vertex2;
    IGGLKVertex *_vertex3;
}

@property(readonly, copy, nonatomic) IGGLKVertex *vertex3; // @synthesize vertex3=_vertex3;
@property(readonly, copy, nonatomic) IGGLKVertex *vertex2; // @synthesize vertex2=_vertex2;
@property(readonly, copy, nonatomic) IGGLKVertex *vertex1; // @synthesize vertex1=_vertex1;
- (void).cxx_destruct;
- (id)initWithVertex1:(id)arg1 vertex2:(id)arg2 vertex3:(id)arg3;

@end

