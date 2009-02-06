
#import <Foundation/Foundation.h>
#import "CPPlotSpace.h"
#import "CPDefinitions.h"


@interface CPCartesianPlotSpace : CPPlotSpace {
	CPPlotRange xRange, yRange;
}

@property (nonatomic, readwrite, assign) CPPlotRange xRange, yRange;

@end