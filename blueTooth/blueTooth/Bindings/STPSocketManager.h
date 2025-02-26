

#import <Foundation/Foundation.h>

@interface STPSocketManager : NSObject

@property (nonatomic, strong) NSData *writeData;

@property (nonatomic, copy) void(^didReadDataBlock)(NSDictionary *readData);


/**
 *  单例
 */
+ (STPSocketManager*)defaultSocket;
/**
 *  发送链接请求
 */
- (BOOL)startConnect:(NSString *)host port:(NSString *)port;

/**
 发送数据

 @param data 数据data
 */
- (void)sendData:(NSData *)data;

@end
