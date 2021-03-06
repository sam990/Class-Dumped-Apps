//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFFormElement.h>

@class PSPDFInkAnnotation, PSPDFSignatureInfo;

@interface PSPDFSignatureFormElement : PSPDFFormElement
{
    _Bool _validated;
    _Bool _isValid;
    PSPDFSignatureInfo *_signatureInfo;
}

+ (_Bool)isRenderedUsingCore;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1 options:(id)arg2;
- (id)signatureBiometricProperties:(id)arg1;
- (id)annotationIcon;
- (id)formTypeName;
@property(readonly) PSPDFInkAnnotation *overlappingInkSignature;
@property(readonly) _Bool isSigned;
@property(retain) PSPDFSignatureInfo *signatureInfo; // @synthesize signatureInfo=_signatureInfo;
- (void)setAppearanceStreamGenerator:(id)arg1;
- (id)initWithCoreAnnotation:(id)arg1 formField:(id)arg2 documentProvider:(id)arg3;

@end

