//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/HAMDASHXMLParser.h>

@class HAMDASHMPDBuilder, HAMDASHMPDElementParser;

@interface HAMDASHMPDParser : HAMDASHXMLParser
{
    HAMDASHMPDElementParser *_MPDElementParser;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HAMDASHMPDBuilder *MPDBuilder;
- (id)initWithRootElementParser:(id)arg1 rootElementName:(id)arg2;
- (id)initWithFactory:(id)arg1;

@end
