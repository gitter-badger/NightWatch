#include "RF1A.h"

//#define MHZ_906_NA

#ifdef MHZ_906_NA
RF_SETTINGS rfSettings = {
//  FSCTRL1   = 0x06; // frequency synthesizer control
//	FSCTRL0 = 0x0	// NEW
//  FREQ2     = 0x23; // frequency control word, high byte
//  FREQ1     = 0x40; // frequency control word, middle byte
//  FREQ0     = 0x00; // frequency control word, low byte
//  MDMCFG4   = 0x69; // modem configuration
//  MDMCFG3   = 0x4A; // modem configuration
//  MDMCFG2   = 0x33; // modem configuration
//  MDMCFG1   = 0x11; // modem configuration
//  MDMCFG0   = 0xC5; // modem configuration
//  CHANNR    = 0x02; // channel number
//  FREND1    = ????; // front end rx configuration
//  FREND0    = 0x11; // front end tx configuration
//  MCSM0     = 0x18; // main radio control state machine configuration
//  FOCCFG    = 0x17; // frequency offset compensation configuration
//  BSCFG     = ????; // Bit synchronization Configuration.
//  AGCCTRL2  = ????; // AGC control
//  AGCCTRL1  = ????; // AGC control
//  AGCCTRL0  = ????; // AGC control
//  FSCAL3    = 0xE9; // frequency synthesizer calibration
//  FSCAL2    = 0x2A; // frequency synthesizer calibration
//  FSCAL1    = 0x00; // frequency synthesizer calibration
//  FSCAL0    = 0x1F; // frequency synthesizer calibration
//  TEST2     = ????; // various test settings
//  TEST1     = 0x31; // various test settings
//  TEST0     = 0x09; // various test settings
//  FIFOTHR = ???;  RXFIFO and TXFIFO thresholds.
//  IOCFG2 = ????;   // GDO2 output pin configuration.
//  IOCFG0D = ????;   // GDO0 output pin configuration. Refer to SmartRF® Studio User Manual for detailed pseudo register explanation.
//  PKTCTRL1  = 0x00; // packet automation control
//  PKTCTRL0  = 0x00; // packet automation control
//  ADDR = 0x00; ??? // Device address.
//  PKTLEN    = 0xFE; // packet length
		};
//  SYNC1     = 0xFF; // sync word, high byte
//  SYNC0     = 0x00; // sync word, low byte


#elif defined MHZ_915
// Chipcon
// Product = CC430Fx13x
// Chip version = A   (HW Rev. 0x10)
// Crystal accuracy = 10 ppm
// X-tal frequency = 26 MHz
// RF output power = 0 dBm
// RX filterbandwidth = 101.562500 kHz
// Deviation = 19 kHz
// Datarate = 38.383484 kBaud
// Modulation = (1) GFSK
// Manchester enable = (0) Manchester disabled
// RF Frequency = 914.999969 MHz
// Channel spacing = 199.951172 kHz
// Channel number = 0
// Optimization = -
// Sync mode = (0) No preamble/sync
// Format of RX/TX data = (3) Asynchronous transparent mode. Data in on GDO0 and Data out on either of the GDO pins
// CRC operation = (0) CRC disabled for TX and RX
// Forward Error Correction = (0) FEC disabled
// Length configuration = (2) Enable infinite length packets.
// Packetlength = 255
// Preamble count = (2)  4 bytes
// Append status = 1
// Address check = (0) No address check
// FIFO autoflush = 0
// Device address = 0
// GDO0 signal selection = (46) High_Z
// GDO2 signal selection = (11) Serial Clock
RF_SETTINGS rfSettings = {
	0x08,   // FSCTRL1   Frequency synthesizer control.
	0x00,// FSCTRL0   Frequency synthesizer control.
	0x23,// FREQ2     Frequency control word, high byte.
	0x31,// FREQ1     Frequency control word, middle byte.
	0x3B,// FREQ0     Frequency control word, low byte.
	0xCA,// MDMCFG4   Modem configuration.
	0x83,// MDMCFG3   Modem configuration.
	0x90,// MDMCFG2   Modem configuration.
	0x22,// MDMCFG1   Modem configuration.
	0xF8,// MDMCFG0   Modem configuration.
	0x00,// CHANNR    Channel number.
	0x34,// DEVIATN   Modem deviation setting (when FSK modulation is enabled).
	0x56,// FREND1    Front end RX configuration.
	0x10,// FREND0    Front end TX configuration.
	0x18,// MCSM0     Main Radio Control State Machine configuration.
	0x16,// FOCCFG    Frequency Offset Compensation Configuration.
	0x6C,// BSCFG     Bit synchronization Configuration.
	0x43,// AGCCTRL2  AGC control.
	0x40,// AGCCTRL1  AGC control.
	0x91,// AGCCTRL0  AGC control.
	0xE9,// FSCAL3    Frequency synthesizer calibration.
	0x2A,// FSCAL2    Frequency synthesizer calibration.
	0x00,// FSCAL1    Frequency synthesizer calibration.
	0x1F,// FSCAL0    Frequency synthesizer calibration.
	0x59,// FSTEST    Frequency synthesizer calibration.
	0x81,// TEST2     Various test settings.
	0x35,// TEST1     Various test settings.
	0x09,// TEST0     Various test settings.
	0x47,// FIFOTHR   RXFIFO and TXFIFO thresholds.
	0x0B,// IOCFG2    GDO2 output pin configuration.
	0x2E,// IOCFG0D   GDO0 output pin configuration. Refer to SmartRF® Studio User Manual for detailed pseudo register explanation.
	0x04,// PKTCTRL1  Packet automation control.
	0x32,// PKTCTRL0  Packet automation control.
	0x00,// ADDR      Device address.
	0xFF// PKTLEN    Packet length.
};

#elif defined MHZ_868

// Chipcon
// Product = CC430Fx13x
// Chip version = A   (HW Rev. 0x10)
// Crystal accuracy = 10 ppm
// X-tal frequency = 26 MHz
// RF output power = 0 dBm
// RX filterbandwidth = 101.562500 kHz
// Deviation = 19 kHz
// Datarate = 38.383484 kBaud
// Modulation = (1) GFSK
// Manchester enable = (0) Manchester disabled
// RF Frequency = 867.999939 MHz
// Channel spacing = 199.951172 kHz
// Channel number = 0
// Optimization = -
// Sync mode = (0) No preamble/sync
// Format of RX/TX data = (3) Asynchronous transparent mode. Data in on GDO0 and Data out on either of the GDO pins
// CRC operation = (0) CRC disabled for TX and RX
// Forward Error Correction = (0) FEC disabled
// Length configuration = (2) Enable infinite length packets.
// Packetlength = 255
// Preamble count = (2)  4 bytes
// Append status = 1
// Address check = (0) No address check
// FIFO autoflush = 0
// Device address = 0
// GDO0 signal selection = (45) GDO0_Z_EN_N
// GDO2 signal selection = (11) Serial Clock
RF_SETTINGS rfSettings = {
	0x08,   // FSCTRL1   Frequency synthesizer control.
	0x00,// FSCTRL0   Frequency synthesizer control.
	0x21,// FREQ2     Frequency control word, high byte.
	0x62,// FREQ1     Frequency control word, middle byte.
	0x76,// FREQ0     Frequency control word, low byte.
	0xCA,// MDMCFG4   Modem configuration.
	0x83,// MDMCFG3   Modem configuration.
	0x90,// MDMCFG2   Modem configuration.
	0x22,// MDMCFG1   Modem configuration.
	0xF8,// MDMCFG0   Modem configuration.
	0x00,// CHANNR    Channel number.
	0x34,// DEVIATN   Modem deviation setting (when FSK modulation is enabled).
	0x56,// FREND1    Front end RX configuration.
	0x10,// FREND0    Front end TX configuration.
	0x18,// MCSM0     Main Radio Control State Machine configuration.
	0x16,// FOCCFG    Frequency Offset Compensation Configuration.
	0x6C,// BSCFG     Bit synchronization Configuration.
	0x43,// AGCCTRL2  AGC control.
	0x40,// AGCCTRL1  AGC control.
	0x91,// AGCCTRL0  AGC control.
	0xE9,// FSCAL3    Frequency synthesizer calibration.
	0x2A,// FSCAL2    Frequency synthesizer calibration.
	0x00,// FSCAL1    Frequency synthesizer calibration.
	0x1F,// FSCAL0    Frequency synthesizer calibration.
	0x59,// FSTEST    Frequency synthesizer calibration.
	0x81,// TEST2     Various test settings.
	0x35,// TEST1     Various test settings.
	0x09,// TEST0     Various test settings.
	0x47,// FIFOTHR   RXFIFO and TXFIFO thresholds.
	0x0B,// IOCFG2    GDO2 output pin configuration.
	0x2E,// IOCFG0D   GDO0 output pin configuration. Refer to SmartRF® Studio User Manual for detailed pseudo register explanation.
	0x04,// PKTCTRL1  Packet automation control.
	0x32,// PKTCTRL0  Packet automation control.
	0x00,// ADDR      Device address.
	0xFF// PKTLEN    Packet length.
};

#endif

#if !defined (MHZ_868) && !defined (MHZ_915)
#error "Please select MHZ_868 or MHZ_915 as the active project configuration" 
#endif
