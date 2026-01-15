/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.projlogin;

import javax.swing.*;
import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class  Projlogin{

    
    public static void main(String[] args) {
        JFrame f1=new JFrame();
        //////
        JLabel l1=new JLabel("User Name:-");
        l1.setBounds(50,100,100,20);
        
        JTextField t1=new JTextField();
        t1.setBounds(150,100,100,20);
        
        JLabel l2=new JLabel("Password:-");
        l2.setBounds(50,150,100,20);
        
        JPasswordField t2=new JPasswordField();
        t2.setBounds(150,150,100,20);
        
        JButton b1=new JButton("Submit");
         b1.setBounds(150, 200, 100, 20);
         
         JButton b2=new JButton("Cancel");
         b2.setBounds(40, 200, 100, 20);
         
         
     b1.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent e)
        {
         String u=t1.getText();
         String p=t2.getText();
         
        }
        });
        
        
        
        
        
        f1.add(l1);
        f1.add(t1);
        f1.add(l2);
        f1.add(t2);
        f1.add(b1);
        f1.add(b2);
        f1.add(b3);

                f1.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
                f1.setSize(600,600);
                f1.setLayout(null);
                f1.setVisible(true);
        
    }
    

    }

