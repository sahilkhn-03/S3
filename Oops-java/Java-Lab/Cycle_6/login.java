/*swing used to genereate interfeaces
FRAME ,TEXT FIELD,BUTTON,LABEL,          
WE IMPORT ALL THE JAVA AWT LIBRARIE AND SEPERATE EVENT LIBRARY AS TO REDUCE THE TIME REQUIRED
*/


import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Test implements ActionListener {
    JLabel l1, l2, l3;
    JTextField t1, t2, t3;
    JButton b1, b2;
    JFrame f;

    Test() {
        f = new JFrame("SUBWAY SURFERS");
        l1 = new JLabel("Username");
        l2 = new JLabel("Password");
        l3 = new JLabel("Class");
        t1 = new JTextField(16);
        t2 = new JTextField(16);
        t3 = new JTextField(16);
        b1 = new JButton("Submit");
        b2 = new JButton("Clear");

        JPanel p = new JPanel(new GridLayout(4, 2));
        p.add(l1);
        p.add(t1);
        p.add(l2);
        p.add(t2);
        p.add(l3);
        p.add(t3);
        p.add(b1);
        p.add(b2);

        b1.addActionListener(this);
        b2.addActionListener(this);

        f.add(p);
        f.setSize(300, 300);
        f.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        String s = e.getActionCommand();

        if (s.equals("Submit")) {
            l1.setText("Username: " + t1.getText());
            l2.setText("Password: " + t2.getText());
            l3.setText("Class: " + t3.getText());
        } else if (s.equals("Clear")) {
            t1.setText("");
            t2.setText("");
            t3.setText("");
        }
    }

    public static void main(String[] args) {
        new Test();
