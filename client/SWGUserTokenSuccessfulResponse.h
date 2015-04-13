#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGUserTokenSuccessfulResponseInnerUserField.h"


@protocol SWGUserTokenSuccessfulResponse
@end
  
@interface SWGUserTokenSuccessfulResponse : SWGObject

/* Status code 
 */
@property(nonatomic) NSNumber* code;
/* Message 
 */
@property(nonatomic) NSString* message;

@property(nonatomic) SWGUserTokenSuccessfulResponseInnerUserField* user;

@end
