//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol DBLightboxFileViewerInteractionManagerProtocol, DBMediaFileViewerInteractionManagerProtocol, DBPDFFileViewerInteractionManagerProtocol;

@protocol DBFileViewerInteractionManagerProtocol
@property(readonly, nonatomic) id <DBPDFFileViewerInteractionManagerProtocol> pdfInteractionManager;
@property(readonly, nonatomic) id <DBLightboxFileViewerInteractionManagerProtocol> lightboxInteractionManager;
@property(readonly, nonatomic) id <DBMediaFileViewerInteractionManagerProtocol> mediaInteractionManager;
@property(nonatomic) unsigned long long managerType;
@end

