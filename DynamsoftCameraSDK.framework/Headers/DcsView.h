//
//  DcsView.h
//  DCSTest
//
//  Created by dynamsoft on 11/05/2017.
//  Copyright © 2017 Cooper. All rights reserved.
//  Date:913
//

#import <UIKit/UIKit.h>

@class DcsUIVideoView;
@class DcsUIImageGalleryView;
@class DcsUIDocumentEditorView;
@class DcsUIImageEditorView;
@class DcsBuffer;
@class DcsIo;

@interface DcsView : UIView

typedef enum{
    DVE_VIDEOVIEW=0x1000,
    DVE_IMAGEGALLERYVIEW,
    DVE_EDITORVIEW
}DcsViewEnum;

typedef enum{
    DLLE_OFF,   //colse the log output
	DLLE_ERROR, //The Error level    
	DLLE_DEBUG, //The debug level
}DcsLogLevelEnum;

/**
 * @since 6.0
 * currentView
 *
 * Gets or sets the current view type.The default is DVE_IMAGEGALLERYVIEW.
 */
@property(nonatomic, assign) DcsViewEnum currentView;


/**
 * @since 6.0
 * videoView
 * Gets the DcsUIVideoView object of DcsView
 */
@property (nonatomic, strong, readonly) DcsUIVideoView *videoView;

/**
 * @since 6.0
 * imageGalleryView
 * Gets the DcsUIImageGalleryView object of DcsView
 */
@property (nonatomic, strong, readonly) DcsUIImageGalleryView *imageGalleryView;

/**
 * @since 6.0
 * documentEditorView
 * Gets the DcsUIDocumentEditorView object of DcsView
 */
@property (nonatomic, strong, readonly) DcsUIDocumentEditorView *documentEditorView;

/**
 * @since 6.0
 * imageEditorView
 * Gets the DcsUIImageEditorView object of DcsView
 */
@property (nonatomic, strong, readonly) DcsUIImageEditorView *imageEditorView;

/**
 * @since 6.0
 * DcsIo
 * Get the data input and output object of DcsView
 */
@property (nonatomic, strong,readonly) DcsIo *io;

/**
 * @since 6.0
 * setLogLevel
 * Sets the log display level. The log message will output on console
 * @param logLevel   The log level.The default level is DLLE_OFF.
 */
+ (void)setLogLevel:(DcsLogLevelEnum)logLevel;

/**
 * @since 6.0
 * buffer
 * Gets the temporary storage pool for all the DcsImage and DcsDocument objects of DcsView.
 */
@property(nonatomic, strong,readonly) DcsBuffer *buffer;
@end
