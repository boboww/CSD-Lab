<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="B_in(3:0)" />
        <signal name="S0_in" />
        <signal name="S1_in" />
        <signal name="A_in(3:0)" />
        <signal name="Lab1_out(3:0)" />
        <signal name="XLXN_28(3:0)" />
        <signal name="XLXN_30(3:0)" />
        <signal name="XLXN_31(3:0)" />
        <signal name="C_out_Add" />
        <signal name="C_out_Subtract" />
        <signal name="XLXN_44(3:0)" />
        <signal name="C_out_Double" />
        <signal name="C_in" />
        <port polarity="Input" name="B_in(3:0)" />
        <port polarity="Input" name="S0_in" />
        <port polarity="Input" name="S1_in" />
        <port polarity="Input" name="A_in(3:0)" />
        <port polarity="Output" name="Lab1_out(3:0)" />
        <port polarity="Output" name="C_out_Add" />
        <port polarity="Output" name="C_out_Subtract" />
        <port polarity="Output" name="C_out_Double" />
        <port polarity="Input" name="C_in" />
        <blockdef name="fulladd4">
            <timestamp>2018-1-22T23:37:17</timestamp>
            <rect width="256" x="64" y="-192" height="192" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="Subtract">
            <timestamp>2018-1-23T19:37:57</timestamp>
            <rect width="256" x="64" y="-192" height="192" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="Double">
            <timestamp>2018-1-23T19:37:44</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="Mux4bit">
            <timestamp>2018-1-23T19:53:58</timestamp>
            <rect width="256" x="64" y="-384" height="384" />
            <rect width="64" x="0" y="-364" height="24" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <rect width="64" x="0" y="-300" height="24" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-364" height="24" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
        </blockdef>
        <blockdef name="inverter4bit">
            <timestamp>2018-1-24T20:40:54</timestamp>
            <rect width="256" x="64" y="-64" height="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <block symbolname="Subtract" name="XLXI_11">
            <blockpin signalname="A_in(3:0)" name="A_in(3:0)" />
            <blockpin signalname="B_in(3:0)" name="B_in(3:0)" />
            <blockpin signalname="C_in" name="C_in" />
            <blockpin signalname="C_out_Subtract" name="C_out" />
            <blockpin signalname="XLXN_44(3:0)" name="S_out(3:0)" />
        </block>
        <block symbolname="Double" name="XLXI_12">
            <blockpin signalname="A_in(3:0)" name="A_in(3:0)" />
            <blockpin signalname="C_in" name="C_in" />
            <blockpin signalname="C_out_Double" name="C_out" />
            <blockpin signalname="XLXN_30(3:0)" name="S_out(3:0)" />
        </block>
        <block symbolname="fulladd4" name="XLXI_4">
            <blockpin signalname="B_in(3:0)" name="B_in(3:0)" />
            <blockpin signalname="A_in(3:0)" name="A_in(3:0)" />
            <blockpin signalname="C_in" name="C_in" />
            <blockpin signalname="C_out_Add" name="C_out" />
            <blockpin signalname="XLXN_31(3:0)" name="S_out(3:0)" />
        </block>
        <block symbolname="Mux4bit" name="XLXI_13">
            <blockpin signalname="XLXN_44(3:0)" name="C_in(3:0)" />
            <blockpin signalname="XLXN_30(3:0)" name="D_in(3:0)" />
            <blockpin signalname="S0_in" name="S0_in" />
            <blockpin signalname="S1_in" name="S1_in" />
            <blockpin signalname="XLXN_31(3:0)" name="B_in(3:0)" />
            <blockpin signalname="XLXN_28(3:0)" name="A_in(3:0)" />
            <blockpin signalname="Lab1_out(3:0)" name="Mux_out(3:0)" />
        </block>
        <block symbolname="inverter4bit" name="XLXI_14">
            <blockpin signalname="A_in(3:0)" name="A_in(3:0)" />
            <blockpin signalname="XLXN_28(3:0)" name="A_out(3:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <branch name="B_in(3:0)">
            <wire x2="272" y1="272" y2="272" x1="224" />
            <wire x2="272" y1="272" y2="656" x1="272" />
            <wire x2="352" y1="656" y2="656" x1="272" />
            <wire x2="352" y1="272" y2="272" x1="272" />
        </branch>
        <branch name="S0_in">
            <wire x2="896" y1="1024" y2="1024" x1="208" />
        </branch>
        <branch name="S1_in">
            <wire x2="896" y1="1088" y2="1088" x1="208" />
        </branch>
        <instance x="352" y="752" name="XLXI_11" orien="R0">
        </instance>
        <instance x="352" y="992" name="XLXI_12" orien="R0">
        </instance>
        <instance x="352" y="432" name="XLXI_4" orien="R0">
        </instance>
        <branch name="A_in(3:0)">
            <wire x2="304" y1="336" y2="336" x1="224" />
            <wire x2="304" y1="336" y2="592" x1="304" />
            <wire x2="352" y1="592" y2="592" x1="304" />
            <wire x2="304" y1="592" y2="896" x1="304" />
            <wire x2="352" y1="896" y2="896" x1="304" />
            <wire x2="352" y1="336" y2="336" x1="304" />
            <wire x2="352" y1="112" y2="112" x1="304" />
            <wire x2="304" y1="112" y2="336" x1="304" />
        </branch>
        <branch name="Lab1_out(3:0)">
            <wire x2="1312" y1="896" y2="896" x1="1280" />
        </branch>
        <branch name="XLXN_28(3:0)">
            <wire x2="784" y1="112" y2="112" x1="736" />
            <wire x2="784" y1="112" y2="1216" x1="784" />
            <wire x2="896" y1="1216" y2="1216" x1="784" />
        </branch>
        <branch name="XLXN_30(3:0)">
            <wire x2="896" y1="960" y2="960" x1="736" />
        </branch>
        <branch name="XLXN_31(3:0)">
            <wire x2="800" y1="400" y2="400" x1="736" />
            <wire x2="800" y1="400" y2="1152" x1="800" />
            <wire x2="896" y1="1152" y2="1152" x1="800" />
        </branch>
        <branch name="C_out_Add">
            <wire x2="752" y1="272" y2="272" x1="736" />
            <wire x2="832" y1="272" y2="272" x1="752" />
        </branch>
        <branch name="C_out_Subtract">
            <wire x2="752" y1="592" y2="592" x1="736" />
            <wire x2="816" y1="592" y2="592" x1="752" />
        </branch>
        <branch name="XLXN_44(3:0)">
            <wire x2="816" y1="720" y2="720" x1="736" />
            <wire x2="816" y1="720" y2="896" x1="816" />
            <wire x2="896" y1="896" y2="896" x1="816" />
        </branch>
        <branch name="C_out_Double">
            <wire x2="752" y1="896" y2="896" x1="736" />
            <wire x2="816" y1="656" y2="656" x1="752" />
            <wire x2="752" y1="656" y2="896" x1="752" />
        </branch>
        <iomarker fontsize="28" x="176" y="400" name="C_in" orien="R180" />
        <iomarker fontsize="28" x="224" y="272" name="B_in(3:0)" orien="R180" />
        <iomarker fontsize="28" x="224" y="336" name="A_in(3:0)" orien="R180" />
        <iomarker fontsize="28" x="208" y="1024" name="S0_in" orien="R180" />
        <iomarker fontsize="28" x="208" y="1088" name="S1_in" orien="R180" />
        <iomarker fontsize="28" x="816" y="592" name="C_out_Subtract" orien="R0" />
        <iomarker fontsize="28" x="816" y="656" name="C_out_Double" orien="R0" />
        <iomarker fontsize="28" x="832" y="272" name="C_out_Add" orien="R0" />
        <iomarker fontsize="28" x="1312" y="896" name="Lab1_out(3:0)" orien="R0" />
        <instance x="352" y="144" name="XLXI_14" orien="R0">
        </instance>
        <instance x="896" y="1248" name="XLXI_13" orien="R0">
        </instance>
        <branch name="C_in">
            <wire x2="240" y1="400" y2="400" x1="176" />
            <wire x2="352" y1="400" y2="400" x1="240" />
            <wire x2="240" y1="400" y2="720" x1="240" />
            <wire x2="240" y1="720" y2="960" x1="240" />
            <wire x2="352" y1="960" y2="960" x1="240" />
            <wire x2="352" y1="720" y2="720" x1="240" />
        </branch>
    </sheet>
</drawing>