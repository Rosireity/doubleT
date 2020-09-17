#ifndef OVERRIDE
	#define OVERRIDE
#endif
//2019.11.25
//V1.0.0

#ifdef ARM_M3M4
typedef INT32U ARM_BIT;
#else
typedef INT8U ARM_BIT;
#endif

#ifndef HEAD_SYS_REG_ADDR

#define HEAD_SYS_REG_ADDR

#define SYSREGADDR_VISION_2

#pragma region SysRegAddr

    //引用类型
    extern char  __X;
	extern char  __Y;
    extern char  __M;
    extern char  __SM;
	extern char  __HM;
	extern char  __T;
	
	extern short __D;
	extern short __HD;
	extern short __SD;
	extern short __HSD;
	extern short __HSCD;
	extern short __FD;
	extern short __SFD;
	extern short __SSFD;
	extern short __ID;
	extern short __QD;
	extern short __CD;

	

    
	#define D			(&__D)
	#define CD			(&__CD)
	#define HD			(&__HD)
	#define SD			(&__SD)
	#define HSD		(&__HSD)
	#define HSCD		(&__HSCD)
	#define FD			(&__FD)
	#define SFD		(&__SFD)
	#define SSFD		(&__SSFD)
	#define ID			(&__ID)
	#define QD			(&__QD)

	#define M_			((ARM_BIT *)(&__M))
	#define HM_		((ARM_BIT *)(&__HM))
	#define SM_		((ARM_BIT *)(&__SM))
	#define X_			((ARM_BIT *)(&__X))
	#define Y_			((ARM_BIT *)(&__Y))

	#define DHSCD		*(INT32S *)&HSCD
	#define DHSD		*(INT32S *)&HSD
	#define LHSD		*(long long *)&HSD
	#define DSD			*(INT32S *)&SD
	#define FSD			*(FP32 *)&SD
	#define LSD			*(long long *)&SD
	#define DHD			*(INT32S *)&HD
	#define FHD			*(FP32 *)&HD
	#define LHD			*(long long *)&HD
	#define DFD			*(INT32S *)&FD
	#define FFD			*(FP32 *)&FD
	#define DD			*(INT32S *)&D
	#define LDD			*(long long *)&D
	#define FDD			*(FP32 *)&D
	#define DW			*(INT32S*)&W
	#define FW      	*(FP32*)&W
	#define LW      	*(long long *)&W
	#define DID			*(INT32S *)&ID
	#define DQD			*(INT32S *)&QD
    #define DSFD		*(INT32S *)&SFD
    #define FSFD		*(FP32 *)&SFD
    #define LSFD		*(long long *)&SFD
#pragma endregion


#endif
