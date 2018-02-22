<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_1" />
        <signal name="B_in" />
        <signal name="A_in" />
        <signal name="C_in" />
        <signal name="XLXN_12" />
        <signal name="XLXN_13" />
        <signal name="S_out" />
        <signal name="C_out" />
        <port polarity="Input" name="B_in" />
        <port polarity="Input" name="A_in" />
        <port polarity="Input" name="C_in" />
        <port polarity="Output" name="S_out" />
        <port polarity="Output" name="C_out" />
        <blockdef name="and2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
        </blockdef>
        <blockdef name="or2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="192" ey="-96" sx="112" sy="-48" r="88" cx="116" cy="-136" />
            <arc ex="48" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <line x2="48" y1="-144" y2="-144" x1="112" />
            <arc ex="112" ey="-144" sx="192" sy="-96" r="88" cx="116" cy="-56" />
            <line x2="48" y1="-48" y2="-48" x1="112" />
        </blockdef>
        <blockdef name="xor2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="60" y1="-128" y2="-128" x1="0" />
            <line x2="208" y1="-96" y2="-96" x1="256" />
            <arc ex="44" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <arc ex="64" ey="-144" sx="64" sy="-48" r="56" cx="32" cy="-96" />
            <line x2="64" y1="-144" y2="-144" x1="128" />
            <line x2="64" y1="-48" y2="-48" x1="128" />
            <arc ex="128" ey="-144" sx="208" sy="-96" r="88" cx="132" cy="-56" />
            <arc ex="208" ey="-96" sx="128" sy="-48" r="88" cx="132" cy="-136" />
        </blockdef>
        <block symbolname="and2" name="XLXI_1">
            <blockpin signalname="C_in" name="I0" />
            <blockpin signalname="XLXN_1" name="I1" />
            <blockpin signalname="XLXN_12" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_2">
            <blockpin signalname="B_in" name="I0" />
            <blockpin signalname="A_in" name="I1" />
            <blockpin signalname="XLXN_13" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_3">
            <blockpin signalname="XLXN_13" name="I0" />
            <blockpin signalname="XLXN_12" name="I1" />
            <blockpin signalname="C_out" name="O" />
        </block>
        <block symbolname="xor2" name="XLXI_4">
            <blockpin signalname="C_in" name="I0" />
            <blockpin signalname="XLXN_1" name="I1" />
            <blockpin signalname="S_out" name="O" />
        </block>
        <block symbolname="xor2" name="XLXI_5">
            <blockpin signalname="B_in" name="I0" />
            <blockpin signalname="A_in" name="I1" />
            <blockpin signalname="XLXN_1" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="736" y="592" name="XLXI_1" orien="R0" />
        <instance x="736" y="736" name="XLXI_2" orien="R0" />
        <instance x="1056" y="656" name="XLXI_3" orien="R0" />
        <instance x="736" y="448" name="XLXI_4" orien="R0" />
        <instance x="400" y="320" name="XLXI_5" orien="R0" />
        <branch name="XLXN_1">
            <wire x2="688" y1="224" y2="224" x1="656" />
            <wire x2="688" y1="224" y2="320" x1="688" />
            <wire x2="736" y1="320" y2="320" x1="688" />
            <wire x2="688" y1="320" y2="464" x1="688" />
            <wire x2="736" y1="464" y2="464" x1="688" />
        </branch>
        <branch name="B_in">
            <wire x2="320" y1="256" y2="256" x1="288" />
            <wire x2="400" y1="256" y2="256" x1="320" />
            <wire x2="320" y1="256" y2="672" x1="320" />
            <wire x2="736" y1="672" y2="672" x1="320" />
        </branch>
        <branch name="A_in">
            <wire x2="368" y1="192" y2="192" x1="288" />
            <wire x2="400" y1="192" y2="192" x1="368" />
            <wire x2="368" y1="192" y2="608" x1="368" />
            <wire x2="736" y1="608" y2="608" x1="368" />
        </branch>
        <branch name="C_in">
            <wire x2="592" y1="384" y2="384" x1="288" />
            <wire x2="736" y1="384" y2="384" x1="592" />
            <wire x2="592" y1="384" y2="528" x1="592" />
            <wire x2="736" y1="528" y2="528" x1="592" />
        </branch>
        <branch name="XLXN_12">
            <wire x2="1024" y1="496" y2="496" x1="992" />
            <wire x2="1024" y1="496" y2="528" x1="1024" />
            <wire x2="1056" y1="528" y2="528" x1="1024" />
        </branch>
        <branch name="XLXN_13">
            <wire x2="1024" y1="640" y2="640" x1="992" />
            <wire x2="1024" y1="592" y2="640" x1="1024" />
            <wire x2="1056" y1="592" y2="592" x1="1024" />
        </branch>
        <branch name="S_out">
            <wire x2="1024" y1="352" y2="352" x1="992" />
        </branch>
        <branch name="C_out">
            <wire x2="1344" y1="560" y2="560" x1="1312" />
        </branch>
        <iomarker fontsize="28" x="288" y="192" name="A_in" orien="R180" />
        <iomarker fontsize="28" x="288" y="256" name="B_in" orien="R180" />
        <iomarker fontsize="28" x="288" y="384" name="C_in" orien="R180" />
        <iomarker fontsize="28" x="1024" y="352" name="S_out" orien="R0" />
        <iomarker fontsize="28" x="1344" y="560" name="C_out" orien="R0" />
    </sheet>
</drawing>