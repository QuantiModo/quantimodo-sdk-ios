#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGConversionStep
@end
  
@interface SWGConversionStep : SWGObject

/*  
 */
@property(nonatomic) NSString* operation;
/*  
 */
@property(nonatomic) NSNumber* value;

@end
