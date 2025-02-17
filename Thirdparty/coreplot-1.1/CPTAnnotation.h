#import "CPTDefinitions.h"
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@class CPTAnnotationHostLayer;
@class CPTLayer;

@interface CPTAnnotation : NSObject<NSCoding> {
    @private
     CPTAnnotationHostLayer *annotationHostLayer;
    CPTLayer *contentLayer;
    CGPoint contentAnchorPoint;
    CGPoint displacement;
    CGFloat rotation;
}

@property (nonatomic, readwrite, retain) CPTLayer *contentLayer;
@property (nonatomic, readwrite, retain) CPTAnnotationHostLayer *annotationHostLayer;
@property (nonatomic, readwrite, assign) CGPoint contentAnchorPoint;
@property (nonatomic, readwrite, assign) CGPoint displacement;
@property (nonatomic, readwrite, assign) CGFloat rotation;

@end

#pragma mark -

/** @category CPTAnnotation(AbstractMethods)
 *  @brief CPTAnnotation abstract methods—must be overridden by subclasses.
 **/
@interface CPTAnnotation(AbstractMethods)

/// @name Layout
/// @{
-(void)positionContentLayer;
/// @}

@end
