#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGMeasurementRange
@end
  
@interface SWGMeasurementRange : SWGObject

/* The timestamp of the earliest measurement for a user. 
 */
@property(nonatomic) NSNumber* lowerLimit;
/* The timestamp of the most recent measurement for a user. [optional]
 */
@property(nonatomic) NSNumber<Optional>* upperLimit;

@end
