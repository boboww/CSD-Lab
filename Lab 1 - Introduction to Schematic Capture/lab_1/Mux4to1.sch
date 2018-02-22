<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_9" />
        <signal name="XLXN_10" />
        <signal name="A_in" />
        <signal name="B_in" />
        <signal name="C_in" />
        <signal name="D_in" />
        <signal name="S0" />
        <signal name="S1" />
        <signal name="XLXN_4" />
        <signal name="Mux_out" />
        <signal name="XLXN_1" />
        <signal name="XLXN_2" />
        <signal name="XLXN_3" />
        <port polarity="Input" name="A_in" />
        <port polarity="Input" name="B_in" />
        <port polarity="Input" name="C_in" />
        <port polarity="Input" name="D_in" />
        <port polarity="Input" name="S0" />
        <port polarity="Input" name="S1" />
        <port polarity="Output" name="Mux_out" />
        <blockdef name="and3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
        </blockdef>
        <blockdef name="or4">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="48" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="48" y1="-256" y2="-256" x1="0" />
            <line x2="192" y1="-160" y2="-160" x1="256" />
            <arc ex="112" ey="-208" sx="192" sy="-160" r="88" cx="116" cy="-120" />
            <line x2="48" y1="-208" y2="-208" x1="112" />
            <line x2="48" y1="-112" y2="-112" x1="112" />
            <line x2="48" y1="-256" y2="-208" x1="48" />
            <line x2="48" y1="-64" y2="-112" x1="48" />
            <arc ex="48" ey="-208" sx="48" sy="-112" r="56" cx="16" cy="-160" />
            <arc ex="192" ey="-160" sx="112" sy="-112" r="88" cx="116" cy="-200" />
        </blockdef>
        <blockdef name="inv">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <circle r="16" cx="144" cy="-32" />
        </blockdef>
        <block symbolname="and3" name="XLXI_3">
            <blockpin signalname="S1" name="I0" />
            <blockpin signalname="XLXN_9" name="I1" />
            <blockpin signalname="C_in" name="I2" />
            <blockpin signalname="XLXN_3" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_2">
            <blockpin signalname="S0" name="I0" />
            <blockpin signalname="XLXN_10" name="I1" />
            <blockpin signalname="B_in" name="I2" />
            <blockpin signalname="XLXN_2" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_4">
            <blockpin signalname="S1" name="I0" />
            <blockpin signalname="S0" name="I1" />
            <blockpin signalname="D_in" name="I2" />
            <blockpin signalname="XLXN_4" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_1">
            <blockpin signalname="XLXN_10" name="I0" />
            <blockpin signalname="XLXN_9" name="I1" />
            <blockpin signalname="A_in" name="I2" />
            <blockpin signalname="XLXN_1" name="O" />
        </block>
        <block symbolname="or4" name="XLXI_5">
            <blockpin signalname="XLXN_4" name="I0" />
            <blockpin signalname="XLXN_3" name="I1" />
            <blockpin signalname="XLXN_2" name="I2" />
            <blockpin signalname="XLXN_1" name="I3" />
            <blockpin signalname="Mux_out" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_7">
            <blockpin signalname="S0" name="I" />
            <blockpin signalname="XLXN_9" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_8">
            <blockpin signalname="S1" name="I" />
            <blockpin signalname="XLXN_10" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <branch name="A_in">
            <wire x2="272" y1="144" y2="144" x1="256" />
            <wire x2="832" y1="144" y2="144" x1="272" />
            <wire x2="848" y1="144" y2="144" x1="832" />
        </branch>
        <branch name="B_in">
            <wire x2="272" y1="320" y2="320" x1="256" />
            <wire x2="832" y1="320" y2="320" x1="272" />
            <wire x2="848" y1="320" y2="320" x1="832" />
        </branch>
        <branch name="C_in">
            <wire x2="272" y1="496" y2="496" x1="256" />
            <wire x2="832" y1="496" y2="496" x1="272" />
            <wire x2="848" y1="496" y2="496" x1="832" />
        </branch>
        <branch name="D_in">
            <wire x2="272" y1="672" y2="672" x1="256" />
            <wire x2="832" y1="672" y2="672" x1="272" />
            <wire x2="848" y1="672" y2="672" x1="832" />
        </branch>
        <branch name="S1">
            <wire x2="640" y1="1184" y2="1200" x1="640" />
            <wire x2="800" y1="1200" y2="1200" x1="640" />
            <wire x2="848" y1="1200" y2="1200" x1="800" />
            <wire x2="640" y1="1200" y2="1216" x1="640" />
            <wire x2="848" y1="624" y2="624" x1="800" />
            <wire x2="800" y1="624" y2="1200" x1="800" />
            <wire x2="848" y1="800" y2="1200" x1="848" />
        </branch>
        <instance x="848" y="688" name="XLXI_3" orien="R0" />
        <instance x="848" y="512" name="XLXI_2" orien="R0" />
        <instance x="848" y="864" name="XLXI_4" orien="R0" />
        <instance x="848" y="336" name="XLXI_1" orien="R0" />
        <branch name="XLXN_4">
            <wire x2="1152" y1="736" y2="736" x1="1104" />
            <wire x2="1152" y1="560" y2="736" x1="1152" />
        </branch>
        <branch name="Mux_out">
            <wire x2="1424" y1="464" y2="464" x1="1408" />
        </branch>
        <branch name="XLXN_1">
            <wire x2="1152" y1="208" y2="208" x1="1104" />
            <wire x2="1152" y1="208" y2="368" x1="1152" />
        </branch>
        <instance x="1152" y="624" name="XLXI_5" orien="R0" />
        <branch name="XLXN_2">
            <wire x2="1120" y1="384" y2="384" x1="1104" />
            <wire x2="1120" y1="384" y2="432" x1="1120" />
            <wire x2="1152" y1="432" y2="432" x1="1120" />
        </branch>
        <branch name="XLXN_3">
            <wire x2="1120" y1="560" y2="560" x1="1104" />
            <wire x2="1152" y1="496" y2="496" x1="1120" />
            <wire x2="1120" y1="496" y2="560" x1="1120" />
        </branch>
        <branch name="XLXN_10">
            <wire x2="848" y1="272" y2="272" x1="640" />
            <wire x2="640" y1="272" y2="384" x1="640" />
            <wire x2="848" y1="384" y2="384" x1="640" />
            <wire x2="640" y1="384" y2="960" x1="640" />
        </branch>
        <iomarker fontsize="28" x="1424" y="464" name="Mux_out" orien="R0" />
        <iomarker fontsize="28" x="256" y="672" name="D_in" orien="R180" />
        <iomarker fontsize="28" x="256" y="496" name="C_in" orien="R180" />
        <iomarker fontsize="28" x="256" y="320" name="B_in" orien="R180" />
        <iomarker fontsize="28" x="256" y="144" name="A_in" orien="R180" />
        <branch name="S0">
            <wire x2="368" y1="1184" y2="1200" x1="368" />
            <wire x2="432" y1="1200" y2="1200" x1="368" />
            <wire x2="592" y1="1200" y2="1200" x1="432" />
            <wire x2="368" y1="1200" y2="1216" x1="368" />
            <wire x2="848" y1="448" y2="448" x1="432" />
            <wire x2="432" y1="448" y2="960" x1="432" />
            <wire x2="432" y1="960" y2="1184" x1="432" />
            <wire x2="432" y1="1184" y2="1200" x1="432" />
            <wire x2="592" y1="736" y2="1200" x1="592" />
            <wire x2="848" y1="736" y2="736" x1="592" />
        </branch>
        <branch name="XLXN_9">
            <wire x2="848" y1="208" y2="208" x1="368" />
            <wire x2="368" y1="208" y2="560" x1="368" />
            <wire x2="848" y1="560" y2="560" x1="368" />
            <wire x2="368" y1="560" y2="960" x1="368" />
        </branch>
        <iomarker fontsize="28" x="368" y="1216" name="S0" orien="R90" />
        <instance x="400" y="1184" name="XLXI_7" orien="R270" />
        <instance x="672" y="1184" name="XLXI_8" orien="R270" />
        <iomarker fontsize="28" x="640" y="1216" name="S1" orien="R90" />
    </sheet>
</drawing>