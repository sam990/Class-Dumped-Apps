//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/HAMDASHBaseElementParser.h>

@interface HAMDASHSimpleElementAttributeParser : HAMDASHBaseElementParser
{
    CDUnknownBlockType _attributeBlock;
}

- (void).cxx_destruct;
- (_Bool)parseAttribute:(const char *)arg1 value:(const char *)arg2 valueLength:(unsigned long long)arg3;
- (id)initWithFactory:(id)arg1 attributeBlock:(CDUnknownBlockType)arg2;

@end

