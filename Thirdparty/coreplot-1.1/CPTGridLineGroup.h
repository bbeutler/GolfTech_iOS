#import "CPTLayer.h"

@class CPTPlotArea;

@interface CPTGridLineGroup : CPTLayer {
    @private
    __cpt_weak CPTPlotArea *plotArea;
    BOOL major;
}

@property (nonatomic, readwrite, assign)  CPTPlotArea *plotArea;
@property (nonatomic, readwrite) BOOL major;

@end
