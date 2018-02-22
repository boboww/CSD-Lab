<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="A_in(3:0)" />
        <signal name="C_in" />
        <signal name="C_out" />
        <signal name="S_out(3:0)" />
        <port polarity="Input" name="A_in(3:0)" />
        <port polarity="Input" name="C_in" />
        <port polarity="Output" name="C_out" />
        <port polarity="Output" name="S_out(3:0)" />
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
        <block symbolname="fulladd4" name="XLXI_1">
            <blockpin signalname="A_in(3:0)" name="B_in(3:0)" />
            <blockpin signalname="A_in(3:0)" name="A_in(3:0)" />
            <blockpin signalname="C_in" name="C_in" />
            <blockpin signalname="C_out" name="C_out" />
            <blockpin signalname="S_out(3:0)" name="S_out(3:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <branch name="C_in">
            <wire x2="384" y1="304" y2="304" x1="224" />
            <wire x2="400" y1="304" y2="304" x1="384" />
        </branch>
        <branch name="A_in(3:0)">
            <wire x2="320" y1="240" y2="240" x1="272" />
            <wire x2="400" y1="240" y2="240" x1="320" />
            <wire x2="400" y1="176" y2="176" x1="320" />
            <wire x2="320" y1="176" y2="240" x1="320" />
        </branch>
        <iomarker fontsize="28" x="272" y="240" name="A_in(3:0)" orien="R180" />
        <branch name="C_out">
            <wire x2="896" y1="176" y2="176" x1="784" />
        </branch>
        <branch name="S_out(3:0)">
            <wire x2="896" y1="304" y2="304" x1="784" />
        </branch>
        <iomarker fontsize="28" x="896" y="176" name="C_out" orien="R0" />
        <iomarker fontsize="28" x="896" y="304" name="S_out(3:0)" orien="R0" />
        <instance x="400" y="336" name="XLXI_1" orien="R0">
        </instance>
        <iomarker fontsize="28" x="224" y="304" name="C_in" orien="R180" />
    </sheet>
</drawing>