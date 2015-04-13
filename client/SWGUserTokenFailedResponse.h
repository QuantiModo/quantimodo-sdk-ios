#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGUserTokenFailedResponse
@end
  
@interface SWGUserTokenFailedResponse : SWGObject

/* Status code 
 */
@property(nonatomic) NSNumber* code;
/* Message 
 */
@property(nonatomic) NSString* message;

@property(nonatomic) NSNumber* success;

@end
