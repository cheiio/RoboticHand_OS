
#ifndef SENSORMOD_H
#define SENSORMOD_H


/****************** Include Files ********************/
#include "xil_types.h"
#include "xstatus.h"

#define MYIP_S00_AXI_SLV_REG0_OFFSET 0
#define MYIP_S00_AXI_SLV_REG1_OFFSET 4
#define MYIP_S00_AXI_SLV_REG2_OFFSET 8
#define MYIP_S00_AXI_SLV_REG3_OFFSET 12
#define MYIP_S00_AXI_SLV_REG4_OFFSET 16
#define MYIP_S00_AXI_SLV_REG5_OFFSET 20
#define MYIP_S00_AXI_SLV_REG6_OFFSET 24
#define MYIP_S00_AXI_SLV_REG7_OFFSET 28
#define MYIP_S00_AXI_SLV_REG8_OFFSET 32
#define MYIP_S00_AXI_SLV_REG9_OFFSET 36
#define MYIP_S00_AXI_SLV_REG10_OFFSET 40
#define MYIP_S00_AXI_SLV_REG11_OFFSET 44


/**************************** Type Definitions *****************************/
/**
 *
 * Write a value to a MYIP register. A 32 bit write is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is written.
 *
 * @param   BaseAddress is the base address of the MYIPdevice.
 * @param   RegOffset is the register offset from the base to write to.
 * @param   Data is the data written to the register.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void MYIP_mWriteReg(u32 BaseAddress, unsigned RegOffset, u32 Data)
 *
 */
#define SENSORMOD_mWriteReg(BaseAddress, RegOffset, Data) \
  	Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))

/**
 *
 * Read a value from a MYIP register. A 32 bit read is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is read from the register. The most significant data
 * will be read as 0.
 *
 * @param   BaseAddress is the base address of the MYIP device.
 * @param   RegOffset is the register offset from the base to write to.
 *
 * @return  Data is the data from the register.
 *
 * @note
 * C-style signature:
 * 	u32 MYIP_mReadReg(u32 BaseAddress, unsigned RegOffset)
 *
 */
#define SENSORMOD_mReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))

#endif // MYIP_H
