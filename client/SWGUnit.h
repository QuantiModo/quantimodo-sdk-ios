#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGConversionStep.h"


@protocol SWGUnit
@end
  
@interface SWGUnit : SWGObject

/* Unit name 
 */
@property(nonatomic) NSString* name;
/* Unit abbreviation 
 */
@property(nonatomic) NSString* abbreviatedName;
/* Unit category 
 */
@property(nonatomic) NSString* category;
/* Unit minimum value 
 */
@property(nonatomic) NSNumber* minimum;
/* Unit maximum value 
 */
@property(nonatomic) NSNumber* maximum;
/* Conversion steps list 
 */
@property(nonatomic) NSArray* conversionSteps;

@end
